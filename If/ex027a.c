#include<stdio.h>
main()
{
	char moji;
	printf("•¶Žš‚ð“ü—ÍF");
	scanf("%c", &moji);
	if (moji>=0x61&&moji<=0x7A) {
		printf("•ÏŠ·‚·‚é‚Æ %c\n", moji - 0x20);
	}//¬•¶Žš‚©‚ç‘å•¶Žš
	else {
		if (moji>=0x41&&moji<=0x5A) {
			printf("•ÏŠ·‚·‚é‚Æ%c\n", moji + 0x20);
		}//‘å•¶Žš‚©‚ç¬•¶Žš
		else {
			printf("ƒGƒ‰[‚Å‚·");
		}
	}
}