#include<stdio.h>
main()
{
	char c, * pc;
	pc = &c;
	printf("�P�������́H");
	scanf("%c", &c);
	printf("���̕�����%c", *pc+1);
}