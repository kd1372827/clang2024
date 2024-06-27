#include<stdio.h>
main()
{
	char moji;
	printf("•¶Žš‚ð“ü—ÍF");
	scanf("%c", &moji);
	if (moji>='a' && moji <= 'z') {
		printf("•ÏŠ·‚·‚é‚Æ %c\n", moji - 0x20);
	}
	else {
		if (moji>='A' && moji <= 'Z') {
			printf("•ÏŠ·‚·‚é‚Æ%c\n", moji + 0x20);
		}
		else {
			printf("ƒGƒ‰[‚Å‚·");
		}
	}
}