#include<stdio.h>
main()
{
	int a[30] = { 3,5,7,9,11,13,15,17,19,21,0 };
	int b[30] = { 4,8,12,16,20,24,28,32,38,42,0 };
	int* pa, * pb;
	int i = 0, j;
	pa = a;
	pb = b;
	printf("---実行前---\n配列a[]=");
	for (i = 0; pb[i] != 0; i++) {
		printf("%d,", pa[i]);
	}
	printf("\b \n");
	printf("配列b[]=");
	for (i = 0; pb[i] != 0; i++) {
		printf("%d,", pb[i]);
	}
	printf("\b \n");

	for (i = 0; pa[i] != 0; i++);
	i -= 1;
	for (j = 0; pb[j] != 0; j++,i--) {
		pb[j] = pa[i];
	}

	printf("---実行後---\n配列a[]=");
	for (i = 0; pa[i] != 0; i++) {
		printf("%d,", pa[i]);
	}
	printf("\b \n");
	printf("配列b[]=");
	for (i = 0; pb[i] != 0; i++) {
		printf("%d,", pb[i]);
	}
	printf("\b \n");
}