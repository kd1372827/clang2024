#include<stdio.h>
main() {
	int i, c[10], a[10];
	//int a[10]={10,20,30,40,50,60,70,80,90,100};
	for (i = 0; i < 10; i++) {
		a[i] = 10 + 10 * i;
	}
	for(i = 0; i < 10; i++) {
		c[i] = a[i]*5;
	}
	printf("�z��a����z��c�ɃR�s�[\n�z�� a =");
	for(i = 0; i < 10; i++) {
		printf("%4d", a[i]);
	}
	printf("\n�z�� c =");
	for(i = 0; i < 10; i++) {
		printf("%4d", c[i]);
	}
}