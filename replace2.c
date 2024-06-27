#include<stdio.h>
main()//•Ê‰ð
{
	int a, b;
	a = 5, b = 3;
	printf("a=%d b=%d\n", a, b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("a=%d b=%d\n", a, b);
}