#include<stdio.h>
main()
{
	char c, * pc;
	pc = &c;
	printf("１文字入力？");
	scanf("%c", &c);
	printf("次の文字は%c", *pc+1);
}