#include<stdio.h>
main()
{
	float f;
	printf("実数を入れて:");
	scanf("%f", &f);
	printf("２倍すると%.2f\n３倍すると%.2f\n", f * 2, f * 3);
}