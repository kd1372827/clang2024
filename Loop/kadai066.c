#include<stdio.h>
main()
{
	int g = 1,i=2;
	printf("%d", g);
	do {
		printf("+%d",i);
		g += i;
		i++;
	} while (g <= 300);
	printf("=%d", g);
}