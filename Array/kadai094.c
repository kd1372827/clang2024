#include<stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int b[10] = { 100,200,300,400,500,600,700,800,900,1000 }, c[10];
	printf("�z��a�Ɣz��b�����������\n");
	for (int i = 0; i < 10; i++) {
		c[i] = a[i];
		a[i] = b[i];
		b[i] = c[i];
	}
	printf("�z��a=");
	for (int i = 0; i < 10; i++) {
		printf(" %d", a[i]);
	}
	printf("\n�z��b=");
	for (int i = 0; i < 10; i++) {
		printf(" %d", b[i]);
	}
}