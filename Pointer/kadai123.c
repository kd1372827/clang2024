#include<stdio.h>
main()
{
	double a, b, * pa , * pb ;
	pa = &a;
	pb = &b;
	printf("実数値１？");
	scanf("%lf", &a);
	printf("実数値２？");
	scanf("%lf", &b);
	if (a > b) {
		printf("大きいほう=%f", *pa);
	}
	else {
		printf("大きいほう=%f", *pb);
	}
}