#include<stdio.h>
main()
{
	int i=0,su;
	printf("数を入れて");
	scanf("%d", &su);
	i = su;
	while (i > 0) {
		printf("*");
		i--;
	}
}