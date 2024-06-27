#include<stdio.h>
main()
{
	int a = 100, b;
	int *p_a;	//ポインタの宣言
	p_a = &a;	//アドレスのセット
	b = *p_a;
	printf("a=%d b=%d *p_a=%d\n", a, b, *p_a);
}