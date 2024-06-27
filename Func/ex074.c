#include<stdio.h>
void display1(int n1);	/*プロトタイプ宣言値渡し*/
void display2(int *n2);	/*プロトタイプ宣言アドレス渡し*/
main()
{
	int a, b;
	printf("数値a?:");
	scanf("%d", &a);
	display1(a);
	printf("a=%d\n\n", a);
	printf("数値b?:");
	scanf("%d", &b);
	display2(&b);
	printf("b=%d\n", b);
}

/*関数display1の記述*/
void display1(int n)
{
	printf("数値aは、%dです。\n", n);
	n += 10;
	return;
}

/*関数display2の記述*/
void display2(int* n)
{
	printf("数値bは、%dです。\n", *n);
	*n += 10;
	return;
}