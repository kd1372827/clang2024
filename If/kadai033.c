#include<stdio.h>
main()
{
	char a;
	printf("�A���t�@�x�b�g�H");
	scanf("%c", &a);
	if (a >= 0x41 && a <= 0x5A) {
		printf("�啶���ł�");
	}
	else if (a >= 0x61 && a <= 0x7A) {
		printf("�������ł�");
	}
	else {
		printf("�A���t�@�x�b�g�ł͂Ȃ�");
	}
}