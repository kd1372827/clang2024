#include<stdio.h>
main()
{
	int a;
	char c;
	printf("10�i���̐����H");
	scanf("%d", &a);
	printf("�A���t�@�x�b�go or h or d�H");
	scanf("%c", &c);
	scanf("%c", &c);
	if (c >= 0x41 && c <= 0x5A) {
		c += 0x20;
	}
	switch (c) {
	case'o':printf("%o", a);
		break;
	case'h':printf("%x", a);
		break;
	case'd':printf("%d", a);
		break;
	default:printf("%d", a);
		break;
	}
}