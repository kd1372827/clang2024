#include<stdio.h>
main()
{
	char a[20];
	char* pa;
	int cnt;
	pa = &a[0];
	printf("文字列？");
	gets(pa);
	for (cnt = 0; *pa != '\0'; cnt++, pa++);
	printf("文字数は、%d文字です", cnt);
}