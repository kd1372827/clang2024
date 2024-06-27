#include<stdio.h>
main() {
	int s, i, j;
	printf("”‚ÍH");
	scanf("%d", &s);
	i = 1;
	do {
		j = 0;
		do {
			printf("*");
			j++;
		} while (j < i);
		printf("\n");
		i++;
	} while (i <= s);
}