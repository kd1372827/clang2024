#include<stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int b[10] = { 100,200,300,400,500,600,700,800,900,1000 };
	int g = 0,i;
	printf("�z��a=");
	for (i = 0; i < 10; i++) {
		printf(" %d", a[i]);
		g += a[i];
	}
	printf("\n���v��%d ���ρ�%.0f\n", g, (float)g / i);
	g = 0;
	printf("�z��b=");
	for (i = 0; i < 10; i++) {
		printf(" %d", a[i]);
		g += b[i];
	}
	printf("\n���v��%d ���ρ�%.0f\n", g, (float)g / i);
}