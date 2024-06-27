#include<stdio.h>
main()
{
	char c;
	printf("文字を入力:");
	scanf("%c",&c);
	if (c >= 0x41 && c <= 0x5A) {
		printf("アルファベットです\n");
	}
	else {
		if (c >= 0x61 && c <= 0x7A) {
			printf("アルファベットです\n");
		}
		else {
			if (c >= 0x30 && c <= 0x39) {
				printf("数字です\n");
			}
			else {
				printf("その他の文字です\n");
			}
		}
	}
}