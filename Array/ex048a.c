#include<stdio.h>
main() {
	int a[2][2][3] = { {{3, 4, 5},{4, 5, 6} }, { {2, 2, 3}, { 2, 5, 6 } } };
	int t,i,j ,g=0;
	for (t = 0; t <= 1; t++) {
		printf("�A�p�[�g%d", t+1);
		for (i = 0; i <= 1; i++){
			printf("(%d�K):", i+1);
			for (j = 0; j <= 2; j++) {
				printf("%d ", a[t][i][j]);
				g += a[t][i][j];
			}
		}
		printf("\n");
	}
	printf("�S�̂�%d�l�Z��ł��܂�", g);
}