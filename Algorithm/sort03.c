#include<stdio.h>
#define n 5
main()
{
	int d[n] = { 30,7,25,16,10 };
	int i, j, w;
	printf("ソート前\n");
	for (i = 0; i < n; i++) {
		printf("%3d", d[i]);
	}
	for (i = 1; i < n; i++) {
		for (j = i - 1; j >= 0; j--) {
			if (d[j + 1] >= d[j]) {
				break;
			}
			else {
				w = d[j];
				d[j] = d[j + 1];
				d[j + 1] = w;
			}

		}
	}
	printf("\nソート後\n");
	for (i = 0; i < n; i++) {
		printf("%3d", d[i]);
	}
}