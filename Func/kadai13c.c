#include<stdio.h>
void ire(int*, int*);
main()
{
	int a=10, b=20;

	printf("関数実行前の値：\n");
	printf("a=%d	b=%d\n", a, b);

	ire(&a, &b);

	printf("関数実行後の値：\n");
	printf("a=%d	b=%d\n", a, b);
}

void ire(int* x, int* y)
{
	int s;
	s = *x;
	*x = *y;
	*y = s;
	return;
}