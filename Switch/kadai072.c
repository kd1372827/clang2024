#include<stdio.h>
main()
{
	char c;
	printf("�A���t�@�x�b�g�H");
	scanf("%c", &c);
	switch (c) {
	case'a':printf("America\nAustralia\n");
		break;
	case'e':printf("England\n");
		break;
	case'f':printf("France\n");
		break;
	case'j':printf("Japan\n");
		break;
	default:break;
	}
}