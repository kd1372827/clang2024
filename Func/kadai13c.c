#include<stdio.h>
void ire(int*, int*);
main()
{
	int a=10, b=20;

	printf("�֐����s�O�̒l�F\n");
	printf("a=%d	b=%d\n", a, b);

	ire(&a, &b);

	printf("�֐����s��̒l�F\n");
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