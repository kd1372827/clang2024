#include<stdio.h>
main()
{
	int s;
	printf("0����100�܂ł̐����H");
	scanf("%d", &s);
	if (s >= 90 && s <= 100) {
		printf("���̐��l�̔��茋�ʂ́u�T�v�ł�");
	}
	else if (s >= 80 && s <90) {
		printf("���̐��l�̔��茋�ʂ́u�S�v�ł�");
	}
	else if (s >= 50 && s < 80) {
		printf("���̐��l�̔��茋�ʂ́u�R�v�ł�");
	}
	else if (s >= 30 && s < 50) {
		printf("���̐��l�̔��茋�ʂ́u�Q�v�ł�");
	}
	else {
		printf("���̐��l�̔��茋�ʂ́u�P�v�ł�");
	}
}