#include<stdio.h>
main()
{
	int d[5] = { 30,7,25,16,10 };
	int i, j, w;
	printf("ソート前\n");
	for (i = 0; i < 5; i++) {
		printf("%3d", d[i]);
	}
	for (i = 4; i >0 ; i--) {
		for (j = 0; j < 4; j++) {
			if (d[j]> d[j+1]){
				w = d[j];
				d[j] = d[j+1];
				d[j+1] = w;
			}
		}
	}
	printf("\nソート後\n");
	for (i = 0; i < 5; i++) {
		printf("%3d", d[i]);
	}
}