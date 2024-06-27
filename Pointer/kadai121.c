#include<stdio.h>
main()
{
	int a = 100, b = 10;
	int* pa, * pb;
	pa = &a;
	pb = &b;
	printf("100+10=%d\n", *pa + *pb);
	printf("100-10=%d\n", *pa - *pb);
	printf("100*10=%d\n", *pa * *pb);
	printf("100/10=%d\n", *pa / *pb);
}