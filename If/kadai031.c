#include<stdio.h>
main()
{
	float a, b;
	printf("２つの実数値");
	scanf("%f%f", &a, &b);
	if (a > b) {
		printf("大きいほうは=%f", a);
	}
	if (a < b) {
		printf("大きいほうは=%f", b);
	}
	if (a == b) {
		printf("同じ値です");
	}
}