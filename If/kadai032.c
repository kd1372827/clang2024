#include<stdio.h>
main()
{
	int s;
	printf("整数？");
	scanf("%d", &s);
	if (0==s%2) {
		printf("その数は偶数です");
	}
	else
	{
		printf("その数は奇数です");
	}
}