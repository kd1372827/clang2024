#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define Skil_Num 4	//�X�L���̐�
#define Mob_Num 3	//�G�̎�ނ̐�
//�����Ȃ�������UINT�ōĒ�`
typedef unsigned int UINT;

typedef struct {	//Skill�^�\����
	char name[20];	//�X�L����
	int type;		//�X�L���̎��
	int use_mp;		//�g�pMP
	int effect;		//�X�L������
} Skill;
typedef struct {	//Spec�^�\����
	char name[20];	//���O
	int hp;			//HP
	int atk;		//�U����
	int def;		//�h��� 
	UINT state;		//���
}Spec;
typedef struct {	//Chara�^�\����
	Spec sp;		//Spec�^�\���̕ϐ�
	int maxhp;		//�ő�HP
	int mp;			//MP
	Skill skl[Skil_Num];//Skill�^�\���̕ϐ�
}Chara;
typedef struct {	//Mob�^�\����
	Spec sp;		//Spec�^�\���̕ϐ�
	int rate;		//��Ԉُ�U�������m��
}Mob;

//�񋓌^BitState�̐錾
enum BitState
{
	Base = 0,			//0000 0000 0000 0000(�f)
	Poison = 1 << 0,	//0000 0000 0000 0001(��)
	Sleep = 1 << 1,		//0000 0000 0000 0010(����)
	Paralysis = 1 << 2,	//0000 0000 0000 0100(���)
	Burn = 1 << 3,		//0000 0000 0000 1000(�Ώ�)
	AtkDown = 1 << 5,	//0000 0000 0010 0000(�U����Down)
	Dead = 1 << 6,		//0000 0000 0100 0000(���S�t���O)
	Atk_Skill = 1 << 7,	//0000 0000 1000 0000(���̃t���OON�̂ݏ�Ԉُ�t���\)
	AtkUp = 1 << 8,		//0000 0001 0000 0000(�U����Up)
	DefUp = 1 << 9,		//0000 0010 0000 0000(�h��̓A�b�v)
	DeBuff = 0xff,		//0000 0000 1111 1111(�f�o�t�����p)
};

int TurnCount = 0;		//�o�߃^�[��(�O�`�P�O�O)

//��Ԃ�ύX����֐�
void ChangeFlag(UINT* s);
//��Ԃ��񕜂���֐�
void ClearFlag(UINT* s);
//��Ԃ�\������֐�
void DisplayStatus(Chara c);

//�퓬���[�h�ֈڍs����֐�
void BattleMode(Chara* c, Mob m);
//�퓬���̃��j���[�\�����s��
int DisplayMenu(void);
//�X�L���g�p���̃��j���[�\�����s��
int SkillMenu(Chara c);
//�U�����Ɩh�䑤�̃p�����[�^���g�����U���_���[�W�v�Z
int DamageCalc(Spec sp1, Spec sp2);
//�퓬���[�h����HP�v�Z�Ǝ��S����
void BattleMessage(Spec sp1, Spec* sp2);

/*b_prac1.exe[����:0�`Mob_Num-1]*/
main(int argc, char* argv[])
{
	//������̏�����
	srand(time(0));
	//���L�����ƓG�L�����̃p�����[�^�ݒ�
	//����������:�f�[�^�t�@�C������̓ǂݍ���
	//				name	 hp	  atk def state maxhp mp
	Chara chara = { "��l��",2000,200,100,Base, 2000, 150,
		//sk.name	  type usemp  effect
		{ {"HP��",	0,  50,  800},
		{"�U���̓A�b�v",1,  50,  120},
		{"�h��̓A�b�v",3,	50,	 150},
		{"��Ԉُ��",2,  20,    0}} };
	Mob mob[Mob_Num] = {
		//name  hp   atk def state			  rate% 
		{"�GA", 700, 150,800,Poison | Atk_Skill,30},
		{"�GB", 1500,200,200,Burn | Atk_Skill,30},
		{"�{�X",5000,200, 80,AtkDown | Atk_Skill,10} };
	//������0�`Mob_Num-1�̐��l�����߂�
	int num = rand() % Mob_Num;
	//���s���ɃR�}���h���C���������������ꍇ
	if (argc > 1) {
		//�����𐔒l�ɕϊ�
		num = atoi(argv[1]);
		//�����̐��l��0�`Mob_Num-1�͈̔͂ɂȂ����
		if (num < 0 || num >= Mob_Num) {
			//�����𐶐�
			num = rand() % Mob_Num;
		}
	}
	//�퓬���[�h���J�n
	BattleMode(&chara, mob[num]);
	if (chara.sp.state & Dead) {
		printf("%s�̎��S�ɂ��Q�[���I�[�o�[\n", chara.sp.name);
	}
}
/*int \damageCalc(Spec sp1,Spec sp2)
*�^�_���v�Z�֐�
*������:Spec�^�\���̕ϐ�(�U����)
*������:Spec�^�\���̕ϐ�(�h�䑤)
*(�^�_��)=�U����Atk�~(�U����Atk���h�䑤Def)+�U����Atk�~����0�`0.5
*/
int DamageCalc(Spec sp1, Spec sp2) {
	int damage;
	//�U���̓_�E���t���O���I���ŁAAtk_Skill���I�t�̎�(��l���̛ޏ��̏����ɊY��)
	if ((sp1.state & AtkDown) && !(sp1.state & Atk_Skill)) {
		//�U���͂�0.8�{�ɂ��ă_���[�W�v�Z
		sp1.atk *= 0.8;
	}
	damage = sp1.atk * ((float)sp1.atk / sp2.def) + sp1.atk * (rand() % 50) / 100.0;
	//100����1�̊m���ŉ�S/�ɍ��̈ꌂ
	if (rand() % 100 == 99) {
		return 2 * damage;//�_���[�W2�{
	}
	return damage;//�ʏ�_���[�W
}
/*void BattleMessage(Spec sp1,Spec*sp2){
*�퓬���[�h���̃��b�Z�[�W�\�����s��
*������:Spec�^�\���̕ϐ�(�U����)
*������:Spec�^�\���̕ϐ�(�h�䑤)
*/
void BattleMessage(Spec sp1, Spec* sp2) {
	int damage;
	TurnCount++;
	printf("%s�̍U��\n", sp1.name);
	damage = DamageCalc(sp1, *sp2);
	printf("%s��%d�̃_���[�W\n\n", sp2->name, damage);
	sp2->hp -= damage;
	if (sp2->hp <= 0) {
		printf("%s�͓|���ꂽ\n", sp2->name);
		sp2->state |= Dead;
	}
}
/*void BattleMode(Chara*c,Mob m)
*�퓬���[�h���̃��b�Z�[�W�\�����s��
*������:Chara�^�\���̕ϐ�(���L����)
*������:Mob�^�\���̕ϐ�(�G�L����)
*/
void BattleMode(Chara* c, Mob m) {
#define Damage_Poison 0.8
//#define Damage_Burn 0.9
	const float Damage_Burn = 0.9;
	int command, skill;
	system("cls");//�R�}���h�v�����v�g��cls���߂̎��s
	DisplayStatus(*c);
	printf("%s�������ꂽ�I\n", m.sp.name);
	while (1) {
		command = DisplayMenu();
		if (c->sp.state & Poison) {		//�ł̃t���O��ON�̂Ƃ�
			c->sp.hp *= Damage_Poison;	//���L����HP��Damage_Poison(0.8)�{�ɂ���
		}
		if (c->sp.state & Burn) {		//�Ώ��̃t���O��ON�̂Ƃ�
			c->sp.hp *= Damage_Burn;	//���L����HP��Damage_Burn(0.9)�{�ɂ���
			c->mp *= Damage_Burn;		//���L����MP��Damage_Burn(0.9)�{�ɂ���
		}
		//[��������]
		if (command == 1) {
			DisplayStatus(*c);
			//TurnCount�������̎��͎��L�����̍U��
			if (TurnCount % 2 == 0) {
				BattleMessage(c->sp, &m.sp);
				//�G�L�����̎��S�t���O��ON�Ȃ�
				if (m.sp.state & Dead) {
					break;
				}
			}
			//TurnCount����̂Ƃ��͓G�̍U��
			if (TurnCount % 2 == 1) {
				BattleMessage(m.sp, &c->sp);
				//��Ԉُ�t���m���̌v�Z
				if (rand() % 100 < m.rate) {
					printf("��Ԉُ�U�����󂯂��I\n");
					//��l���ɏ�Ԉُ��t������Ƃ��ɂ́AAtk_Skill�t���O���������Ă���
					c->sp.state |= (m.sp.state & ~Atk_Skill);
				}
				//���L�����̎��S�t���O��ON�Ȃ�
				if (c->sp.state & Dead) {
					break;
				}
				else {
					DisplayStatus(*c);
				}
			}
		}
		//DisplayMenu�ŋ����I���p�̃L�[�������ꂽ���̏���
		else if (command == -1) {
			c->sp.state |= Dead;
			return;
		}
		//[�X�L��]
		else if (command == 2) {
			printf("�X�L���̑I��\n");
			skill = SkillMenu(*c);	//skill��0�`2�̂����ꂩ
			//MP�c�ʃ`�F�b�N(��MP�ʂ��X�L���g�pMP��葽���Ƃ�)
			if (c->mp >= c->skl[skill].use_mp) {
				//���L������MP���g�p�����Ԃ񌸂炷
				c->mp -= c->skl[skill].use_mp;

				switch (c->skl[skill].type) {
				case 0://HP�X�L���g�p���̏���
					//���L����HP�ɃX�L���g�p�ɂ��񕜗�(effect�l)�����Z
					c->sp.hp += c->skl[skill].effect;
					//���L����HP��MAXHP�𒴂�����AMAXHP�ɑ�����
					if (c->sp.hp > c->maxhp) { c->sp.hp = c->maxhp; }
					//�X�L���g�p���ʗʂ�\��
					printf("HP��%d�񕜂����I\n", c->skl[skill].effect);
					break;
				case 1://�U���̓A�b�v�̏���
					//���L����ATK��1.20�{(=120��100)
					c->sp.atk *= c->skl[skill].effect / 100.0;
					//�U���̓A�b�v�t���OON
					c->sp.state |= AtkUp;
					//�X�L���̌��ʂ�\��
					printf("�U���͂��A�b�v�����I\n");
					break;
				case 2://��Ԉُ�񕜂̏���
					//����8�r�b�g�̃f�o�t�t���O�ɂ�0�ɂ���
					//~DeBuff:1111 1111 1111 1111 1111 1111 0000 0000
					c->sp.state &= ~DeBuff;
					printf("��Ԉُ킪�񕜂����I\n");
					break;
				case 3://�h��̓A�b�v�̏���
					//���L����DEF��1.50�{(=150��100)
					c->sp.def *= c->skl[skill].effect / 100.0;
					//�h��̓A�b�v�t���OON
					c->sp.state |= DefUp;
					//�X�L���̌��ʂ�\��
					printf("�h��͂��A�b�v�����I\n");
					break;
				default:
					break;
				}
				//�X�e�[�^�X��\��
				DisplayStatus(*c);
			}
			else {
				//MP�c�ʃ`�F�b�N�Ɉ������������Ƃ��̏���
				printf("MP������Ȃ��I\n");
			}
		}
		else if (command == 3) {
			if (rand() % 100 < 20) {
				printf("�����邱�Ƃ��ł����I\n");
				return;
			}
			else {
				printf("�G�ɉ�荞�܂ꂽ\n");
			}
		}
	}
}
/*int DisplayMenu(void)
*�퓬���[�h���̃R�}���h�I����ʂ�I��
*�߂�l:�I�������R�}���h�̃��j���[�ԍ�(-1�̂݋����I��)
*/
int DisplayMenu(void)
{
	char ch;
	while (1) {
		printf("----------\n�R�}���h��I��\n");
		printf("1,��������\n2,�X�L��\n3,�ɂ���\n\n");
		ch = getch();
		if (ch > '0' && ch < '4') {
			return ch - '0';
		}
		else if (ch == 'q') {	//�B���R�}���h�F�����I��'q'
			return -1;
		}
	}
}
/*int SkillMenu(Chara c)
*�퓬���[�h���̃X�L���I����ʂ�\��
*������:Chara�^�\���̕ϐ�(���L����)
*�߂�l:�I�������R�}���h�̃��j���[�ԍ�*/ 
int SkillMenu(Chara c)
{
	int i, ch;
	while (1) {
		printf("----------\n�X�L����I��\n");
		for (i = 0; i < Skil_Num; i++) {
			printf("%d.%s\n", i + 1, c.skl[i].name);
		}
		printf("\n");
		ch = getch() - '0';
		if (ch > 0 && ch <= Skil_Num) {
			return ch - 1;
		}
	}
}
/*void DisplayStatus(Chara c)
* �퓬���[�h���̎��L�����̃X�e�[�^�X�\��
*������:Chara�^�\���̕ϐ�*/
void DisplayStatus(Chara c)
{
	printf("*****���݂̏��*****\n");
	// HP��MP�̕\��
	printf("HP:%-4d	MP:%-3d\n", c.sp.hp, c.mp);
	//�t���O�������Ă���r�b�g�̊m�F
	if (c.sp.state) {
		printf("���:\n");
		if (c.sp.state & Poison) {
			printf("��\n");
		}
		if (c.sp.state & Sleep) {
			printf("����\n");
		}
		if (c.sp.state & Paralysis) {
			printf("���\n");
		}
		if (c.sp.state & Burn) {
			printf("�Ώ�\n");
		}
		if (c.sp.state & AtkUp) {
			printf("�U���̓A�b�v\n");
		}
		if (c.sp.state & DefUp) {
			printf("�h��̓A�b�v\n");
		}
		if (c.sp.state & AtkDown) {
			printf("�U���̓_�E��\n");
		}
		if (c.sp.state == Base) {
			printf("\n��ԕω��Ȃ�\n\n");
		}
	}
	printf("********************\n");
}

/*void ChangeFlag(UINT* s)
{
	int a;
	while (1) {
		DisplayStatus(*s);
		printf("�ǂ̏�Ԃɂ��܂����H\n");
		printf("1:�� 2:���� 3:��� 4:�Ώ� 5:�U���� 6:�U���� \n0:�I��> ");
		scanf("%d", &a);
		if (a == 0) {
			break;
		}
		switch (a) {
		case 1:
			*s |= Poison;
			break;
		case 2:
			*s |= Sleep;
			break;
		case 3:
			*s |= Paralysis;
			break;
		case 4:
			*s |= Burn;
			break;
		case 5:
			*s |= AtkUp;
			break;
		case 6:
			*s |= AtkDown;
			break;
		default:
			break;
		}
	}
}

void ClearFlag(UINT* s)
{
	int ch;
	while (1) {
		DisplayStatus(*s);
		printf("�ǂ̏�Ԃ��������܂����H\n");
		printf("1:�� 2:���� 3:��� 4:�Ώ� 5:�U���� 6:�U���� 7:�S���� \n0:�I��> ");
		scanf("%d", &ch);
		if (ch == 0) {
			break;
		}
		switch (ch) {
		case 1:
			*s &= ~Poison;
			break;
		case 2:
			*s &= ~Sleep;
			break;
		case 3:
			*s &= ~Paralysis;
			break;
		case 4:
			*s &= ~Burn;
			break;
		case 5:
			*s &= ~AtkUp;
			break;
		case 6:
			*s &= ~AtkDown;
			break;
		case 7:
			*s = Base;
			break;
		default:
			break;
		}
	}
}*/