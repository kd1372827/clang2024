#include<stdio.h>

typedef struct	//����̏��
{
	char Wname[20];
	int bullet;
	float atk;
}Weapon;

typedef struct //���m�̏��
{
	char name[20];
	int hp;
	Weapon wpn;
}Soldier;

int err;
void SetInfo(Soldier* s, char* filename);
void Display(Soldier s);

main()
{
	Soldier sol;	//�\���̂̕ϐ�
	SetInfo(&sol,"file03.txt");
	Display(sol);
}

void SetInfo(Soldier* s, char* filename)
{
	FILE* fp;
	if (fp = fopen("file03.txt", "r")) {
		fscanf(fp, "%s%d%s%d%f", s->name, &s->hp,
			s->wpn.Wname, &s->wpn.bullet, &s->wpn.atk);
		fclose(fp);
	}
	else {
		printf("�t�@�C�����ǂ߂܂���ł���\n");
		err = -1;
	}
}

void Display(Soldier s)
{
	if (err != -1) {
		printf("���O:%s �̗�:%d\n", s.name, s.hp);
		printf("����:%s �c�i��:%d �U����:%.2f\n",
			s.wpn.Wname, s.wpn.bullet, s.wpn.atk);
	}
}