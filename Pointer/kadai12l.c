#include<stdio.h>
main()
{
	char a[20];
	char* pa;
	int cnt;
	pa = &a[0];
	printf("������H");
	gets(pa);
	for (cnt = 0; *pa != '\0'; cnt++, pa++);
	printf("�������́A%d�����ł�", cnt);
}