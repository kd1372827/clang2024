#include<stdio.h>
main()
{
	int i = 20;
	do {
		printf("%2d ", i);
		if (i % 10 == 1) {
			printf("\n");
		}
	} while (i-- > 1);
}