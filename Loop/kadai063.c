#include<stdio.h>
main()
{
	int i=0;
	while (i++ < 21) {
		printf("%2d ", i);
		if (i == 10||i==20) {
			printf("\n");
		}
	}
}