#include<stdio.h>
main()
{
	int a,su;
	a = 0;
	printf("数を入れて");
	scanf("%d", &su);
	while ( a<su ) {
		printf("*");
		a++;
	}
}