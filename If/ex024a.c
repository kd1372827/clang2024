#include<stdio.h>
main()
{
	char c;
	printf("•¶Žš‚ð“ü—Í:");
	scanf("%c",&c);
	if (c >= 0x41 && c <= 0x5A){
		printf("‘å•¶Žš‚Å‚·\n");
	}
	else {
		printf("‚»‚Ì‘¼‚Ì•¶Žš‚Å‚·\n");
	}
}