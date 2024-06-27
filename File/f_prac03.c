#include<stdio.h>

typedef struct	//武器の情報
{
	char Wname[20];
	int bullet;
	float atk;
}Weapon;

typedef struct //兵士の情報
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
	Soldier sol;	//構造体の変数
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
		printf("ファイルが読めませんでした\n");
		err = -1;
	}
}

void Display(Soldier s)
{
	if (err != -1) {
		printf("名前:%s 体力:%d\n", s.name, s.hp);
		printf("武器:%s 残段数:%d 攻撃力:%.2f\n",
			s.wpn.Wname, s.wpn.bullet, s.wpn.atk);
	}
}