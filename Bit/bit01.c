#include<stdio.h>
enum BitState
{
	//
	Base = 0,			//0000 0000
	Poison = 1 << 0,	//0000 0001
	Sleep = 1 << 1,		//0000 0010
	Paralysis = 1 << 2,	//0000 0100
	Burn = 1 << 3,		//0000 1000
	AtkUp = 1 << 4,		//0001 0000
	AtkDown = 1 << 5	//0010 0000
};
typedef unsigned int UINT;
void DisplayStatus(UINT s);
void ChangeFlag(UINT* s);
void ClearFlag(UINT* s);
main() {
	UINT MyState = Base;
	int Move;
	ChangeFlag(&MyState);
	DisplayStatus(MyState);
	ClearFlag(&MyState);
	DisplayStatus(MyState);

	/*while (1) {
		printf("‚Ç‚¤‚µ‚Ü‚·‚©H\n1:ó‘ÔˆÙí•t—^ 2:ó‘ÔˆÙí‰ñ•œ 3:ó‘Ô‚ðŒ©‚é \n0:‚â‚ß‚é>");
		scanf("%d", &Move);
		if (Move == 0)
		{
			break;
		}
		switch (Move)
		{
		case 1:
			ChangeFlag(&MyState);
			break;
		case 2:
			ClearFlag(&MyState);
			break;
		case 3:
			DisplayStatus(MyState);
			break;
		default:
			break;
		}
	}
	DisplayStatus(MyState);*/
}

void DisplayStatus(UINT s)
{
	printf("*****Œ»Ý‚Ìó‘Ô*****\n");
	if (s & Poison) {
		printf("“Å\n");
	}
	if (s & Sleep) {
		printf("–°‚è\n");
	}
	if (s & Paralysis) {
		printf("–ƒáƒ\n");
	}
	if (s & Burn) {
		printf("‰Î\n");
	}
	if (s & AtkUp) {
		printf("UŒ‚ƒAƒbƒv\n");
	}
	if (s & AtkDown) {
		printf("UŒ‚ƒ_ƒEƒ“\n");
	}
	if (s == Base) {
		printf("\nó‘Ô•Ï‰»‚È‚µ\n\n");
	}
	printf("********************\n");
}

void ChangeFlag(UINT* s)
{
	int a;
	while (1) {
		DisplayStatus(*s);
		printf("‚Ç‚Ìó‘Ô‚É‚µ‚Ü‚·‚©H\n");
		printf("1:“Å 2:‡–° 3:–ƒáƒ 4:‰Î 5:UŒ‚ª 6:UŒ‚« \n0:I—¹> ");
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
	int a;
	while (1) {
		DisplayStatus(*s);
		printf("‚Ç‚Ìó‘Ô‚ð‰ðœ‚µ‚Ü‚·‚©H\n");
		printf("1:“Å 2:‡–° 3:–ƒáƒ 4:‰Î 5:UŒ‚ª 6:UŒ‚« 7:‘S‰ðœ \n0:I—¹> ");
		scanf("%d", &a);
		if (a == 0) {
			break;
		}
		switch (a) {
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
}