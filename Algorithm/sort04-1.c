#include<stdio.h>
#define DCNT 8
main()
{
	int d[DCNT] = { 70,60,80,50,40,20,30,10 };
	int i, j, w, gap;
	gap = DCNT / 2;
	printf("�\�[�g�O\n");
	for (i = 0; i < DCNT; i++) {
		printf("%2d", d[i]);
	}
	printf("\n \n");
	while (gap > 0) {
		for (i = gap; i < DCNT; i++) {
			for (j = i - gap; j >= 0; j -= gap) {
				//�m�F�p
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
		gap /= 2; //��r�Ԋu�𔼕��ɂ���
		printf("-------------------+\n");//�m�F�p�ɕ\��
	}
	printf("\n�\�[�g��\n");
	for (i = 0; i < DCNT; i++) {
		printf("%3d", d[i]);
	}
}