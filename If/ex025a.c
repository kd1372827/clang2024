#include<stdio.h>
main()
{
	char c;
	printf("���������:");
	scanf("%c",&c);
	if (c >= 0x41 && c <= 0x5A) {
		printf("�A���t�@�x�b�g�ł�\n");
	}
	else {
		if (c >= 0x61 && c <= 0x7A) {
			printf("�A���t�@�x�b�g�ł�\n");
		}
		else {
			if (c >= 0x30 && c <= 0x39) {
				printf("�����ł�\n");
			}
			else {
				printf("���̑��̕����ł�\n");
			}
		}
	}
}