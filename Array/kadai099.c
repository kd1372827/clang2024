#include<stdio.h>
main()
{
	int su, i;
	char m;
	printf("�񐔂ƕ��������́@");
	scanf("%d%s",&su, &m);
	for (i = 0; i < su; i++) {
		printf("%s\t", &m);
	}
}