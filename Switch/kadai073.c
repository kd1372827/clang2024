#include<stdio.h>
main()
{
	int a;
	char c;
	printf("10進数の整数？");
	scanf("%d", &a);
	printf("アルファベットo or h or d？");
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