#include<stdio.h>
main()
{
	char c;
	printf("文字を入力:");
	scanf("%c",&c);
	if (c >= 0x41 && c <= 0x5A){
		printf("大文字です\n");
	}
	else {
		printf("その他の文字です\n");
	}
}