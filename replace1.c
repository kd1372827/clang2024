#include<stdio.h>
main()//2‚É•Ê‰ð
{
	int a, b, c;
	a = 5, b = 3;
	printf("a=%d b=%d\n", a, b);
	c = a, a = b, b = c;
	printf("a=%d b=%d\n", a, b);
}