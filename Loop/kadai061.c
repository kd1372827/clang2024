#include<stdio.h>
main()
{
	int i = 1;
	do {
		printf("%2d ", i);
		if (i % 10 == 0) {
			printf("\n");
		}
	} while (i++ < 20);
}