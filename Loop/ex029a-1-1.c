#include<stdio.h>
main()
{
	int i=0,su;
	printf("��������");
	scanf("%d", &su);
	i = su;
	while (i > 0) {
		printf("*");
		i--;
	}
}