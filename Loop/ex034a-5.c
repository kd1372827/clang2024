#include<stdio.h>
main() {
	int s, i, j;
	printf("”‚ÍHF");
	scanf("%d", &s);
	for (i = 0; i < s; i++) {
		for (j = s-1; j>i ; j--) {
			printf(" ");
		}
		for (j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
}