#include<stdio.h>
main()
{
	int a[30] = { 3,5,7,9,11,13,15,17,19,21,0 };
	int b[30] = { 4,8,12,16,20,24,28,32,38,42,0 };
	int w[30];
	int* pa, * pb,*pw;
	pa = a;
	pb = b;
	pw = w;
	printf("---���s�O---\n�z��a[]=");
	for (int i = 0; pb[i] != 0; i++) {
		printf("%d,", pa[i]);
	}
	printf("\b \n");
	printf("�z��b[]=");
	for (int i = 0; pb[i] != 0; i++) {
		printf("%d,", pb[i]);
	}
	printf("\b \n");
	for (int i = 0; pa[i] != 0; i++) {
		pw[i] = pa[i];
		pa[i] = pb[i];
		pb[i] = pw[i];
	}
	printf("---���s��---\n�z��a[]=");
	for (int i = 0; pb[i] != 0; i++) {
		printf("%d,", pa[i]);
	}
	printf("\b \n");
	printf("�z��b[]=");
	for (int i = 0; pb[i] != 0; i++) {
		printf("%d,", pb[i]);
	}
	printf("\b \n");
}