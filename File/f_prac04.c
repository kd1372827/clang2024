#include<stdio.h>
#define Sol_num 3

typedef struct	//•Ší‚Ìî•ñ
{
	char Wname[20];
	int bullet;
	float atk;
}Weapon;

typedef struct //•ºm‚Ìî•ñ
{
	char name[20];
	int hp;
	Weapon wpn;
}Soldier;

void SetInfo(Soldier* s, char* filename);
void Display(Soldier* s);

main()
{
	Soldier sols[Sol_num];
	SetInfo(sols,"file04.txt");
	Display(sols);
	/*for (int i = 0; i < Sol_num; i++) {
		printf("%d", sols[i].wpn.bullet);
	}*/
}

void SetInfo(Soldier* s, char* filename)
{
	FILE* fp;
	int i;
	if (fp = fopen("file04.txt", "r"))
		for (i = 0; i < Sol_num; i++) {
			fscanf(fp, "%s%d%s%d%f", (s + i)->name, &(s + i)->hp,
				(s + i)->wpn.Wname, &(s + i)->wpn.bullet, &(s + i)->wpn.atk);
		}
	fclose(fp);
}

void Display(Soldier* s)
{
	int i;
	for (i = 0; i < Sol_num; i++) {
		printf("–¼‘O:%s ‘Ì—Í:%d\n", (s + i)->name, (s + i)->hp);
		printf("•Ší:%s c’i”:%d UŒ‚—Í:%.2f\n",
			(s + i)->wpn.Wname, (s + i)->wpn.bullet, (s + i)->wpn.atk);
	}
}