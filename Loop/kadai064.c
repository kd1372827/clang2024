#include<stdio.h>
main()
{
	int i = 21;
	while (i-- > 1) {
		printf("%2d ", i);
		if (i == 11 || i == 1) {
			printf("\n");
		}
	}
}