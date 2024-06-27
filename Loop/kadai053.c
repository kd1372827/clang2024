#include<stdio.h>
main()
{
	int i, s;
	printf("®”H");
	scanf("%d", &s);
	for (i = 0; i < 11; i++) {
		printf("%d ", s + i);
	}
}