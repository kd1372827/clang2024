#include<stdio.h>
#define DCNT 8
main()
{
	int d[DCNT] = { 70,60,80,50,40,20,30,10 };
	int i, j, w, gap;
	gap = DCNT / 2;
	printf("ソート前\n");
	for (i = 0; i < DCNT; i++) {
		printf("%2d", d[i]);
	}
	printf("\n \n");
	while (gap > 0) {
		for (i = gap; i < DCNT; i++) {
			for (j = i - gap; j >= 0; j -= gap) {
				//確認用
				int k;
				for (k = 0; k < DCNT; k++) {
					printf("%d", d[k]);
				}
				printf("\n");
				if (d[j + gap] < d[j]) {
					w = d[j];
					d[j] = d[j + gap];
					d[j + gap] = w;
				}
				else {
					break;
				}
			}
		}
		gap /= 2; //比較間隔を半分にする
		printf("-------------------+\n");//確認用に表示
	}
	printf("\nソート後\n");
	for (i = 0; i < DCNT; i++) {
		printf("%3d", d[i]);
	}
}