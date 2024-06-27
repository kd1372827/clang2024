#include<stdio.h>
void error_msg(void);

main()
{
	int a, b;
	printf(" data1 data2 ?:");
	scanf("%d%d", &a, &b);
	if (b == 0) {
		error_msg();	/*関数error_msgの呼び出し*/
	}
	else {
		printf("%d/%d=%d...%d\n", a, b, a / b, a % b);
	}
}

/*関数error_msgの記述*/
void error_msg(void)
{
	printf("0で割り算は出来ません\n");
	return;
}