#include<stdio.h>
main()
{
	char c;
	printf("���������:");
	scanf("%c",&c);
	if (c >= 0x41 && c <= 0x5A){
		printf("�啶���ł�\n");
	}
	else {
		printf("���̑��̕����ł�\n");
	}
}