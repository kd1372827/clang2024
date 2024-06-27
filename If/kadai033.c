#include<stdio.h>
main()
{
	char a;
	printf("アルファベット？");
	scanf("%c", &a);
	if (a >= 0x41 && a <= 0x5A) {
		printf("大文字です");
	}
	else if (a >= 0x61 && a <= 0x7A) {
		printf("小文字です");
	}
	else {
		printf("アルファベットではない");
	}
}