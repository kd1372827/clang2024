#include<stdio.h>
main()
{
	char a;
	printf("1•¶Žš“ü—ÍH");
	scanf("%c", &a);
	if (a >= 0x41 && a <= 0x5A) {
		printf("‘å•¶Žš‚Å‚·");
	}
	else if (a >= 0x61 && a <= 0x7A) {
		printf("¬•¶Žš‚Å‚·");
	}
	else {
		printf("ERROR");
	}
}