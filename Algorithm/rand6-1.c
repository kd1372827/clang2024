#include<stdio.h>
#include<stdlib.h> //�������g���Ƃ��ɕK�v�ł�
#include<time.h> //�������g���Ƃ��ɕK�v�ł�

main()
{
	int cte, pte;
	printf("�����o���܂����H\n1:�O�[ 2:�`���L 3:�p�[��");
	scanf("%d", &pte);
	srand(time(0));
	rand();
	cte = rand() % 3;
	if (pte == 1) {
		printf("�v���C���[�́A�O�[�ł��B\n");
	}
	if (pte == 2) {
		printf("�v���C���[�́A�`���L�ł��B\n");
	}
	if (pte == 3) {
		printf("�v���C���[�́A�p�[�ł��B\n");
	}
	if (cte == 0) {
		printf("�R���s���[�^�́A�O�[�ł��B");
	}
	if (cte == 1) {
		printf("�R���s���[�^�́A�`���L�ł��B\n\n");
	}
	if (cte == 2) {
		printf("�R���s���[�^�́A�p�[�ł��B\n\n");
	}
	if (pte - cte == 1) {
		printf("�������ł�");
	}
	if (pte - cte == 3) or (pte - cte == 0); {
		printf("�v���C���[�̏����ł��B");
	}
	if (pte - cte == 2) or (pte - cte == -1); {
		printf("�R���s���[�^�̏����ł��B");
	}
	//��������pte-cte=1 p������pte-cte=3�܂���0 c������pte-cte=2�܂���-1
}