#include<stdio.h>
main() {
	int i;
	printf("break test program\n");
	for (i = 1; 1 <= 10; i++) {
		if (i == 7) {
			break;	//���[�v�𔲂���
		}
		printf("%3d", i);
	}

	printf("\n\ncontinue test program\n");
	for (i = 1; i <= 10; i++) {
		if (i % 2 == 1) {
			continue; //���[�v�����΂���
		}
		printf("%3d", i);
	}
	printf("\n\ncontinue test program\n");
	for (i = 1; i <= 10; i++) {
		if (i % 2 == 0) {
			continue; //���[�v�����΂���
		}
		printf("%3d", i);
	}
}