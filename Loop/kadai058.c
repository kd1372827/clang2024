#include<stdio.h>
main()
{
	int c = 0;
	for (int i = 32; i != 126 + 1; i++) {
		printf("%x %c ", i, i);
		c++;
		if (0 == c % 10) {
			printf("\n");
		}
	}
}