#include<stdio.h>
main()
{
	double a, b, * pa , * pb ;
	pa = &a;
	pb = &b;
	printf("�����l�P�H");
	scanf("%lf", &a);
	printf("�����l�Q�H");
	scanf("%lf", &b);
	if (a > b) {
		printf("�傫���ق�=%f", *pa);
	}
	else {
		printf("�傫���ق�=%f", *pb);
	}
}