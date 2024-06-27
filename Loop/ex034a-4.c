#include<stdio.h>
main() {
	int s, i, j;
	printf("”‚ÍH");
	scanf("%d", &s);
	i = 0;
	do {
		j = 0;
		do {
			printf(" ");
			j++;
		} while (j < s - i);
		j = 0;
		do {
			printf("*");
			j++;
		} while (j < i + 1);
		printf("\n");
		i++;
	} while (i < s);
}