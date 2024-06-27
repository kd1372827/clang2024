#include<stdio.h>
main()
{
	double a, b, * pa , * pb ;
	pa = &a;
	pb = &b;
	printf("ŽÀ”’l‚PH");
	scanf("%lf", &a);
	printf("ŽÀ”’l‚QH");
	scanf("%lf", &b);
	if (a > b) {
		printf("‘å‚«‚¢‚Ù‚¤=%f", *pa);
	}
	else {
		printf("‘å‚«‚¢‚Ù‚¤=%f", *pb);
	}
}