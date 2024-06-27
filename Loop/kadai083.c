#include<stdio.h>
main()
{
	int i;
	for (i = 1;; i++) {
		if (i == 20) {
			break;
		}
		if (0 == i % 2) {
			continue;
		}
		printf("%2d ", i);
	}
}