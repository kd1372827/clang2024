#include<stdio.h>
main()
{
	float f1, f2=0, f3=0;
	printf("�������R����:");
	scanf("%f %f %f", &f1, &f2, &f3);
	printf("���v=%.2f ����=%.2f", f1 + f2 + f3, (f1 + f2 + f3) / 3);
}