#include<stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int b[10] = { 100,200,300,400,500,600,700,800,900,1000 };
	int c[10];
	printf("”z—ña=");
	for (int i = 0; i < 10; i++) {
		printf(" %d ", a[i]);
	}
	printf("\n”z—ñb=");
	for (int i = 0; i < 10; i++) {
		printf(" %d", b[i]);
	}
	printf("\n”z—ñc=");
	for (int i = 0; i < 10; i++) {
		printf(" %d", a[i] + b[i]);
	}
	printf("\n");
}