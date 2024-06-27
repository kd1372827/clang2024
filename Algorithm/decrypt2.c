#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	char s[20];
	int i,k;
	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢„");
	scanf("%s", &s[0]);
	srand(time(0));
	for (i = 0; s[i] !='\0'; i++) {
		printf("s[%d]‚Ì•œ†‰»ƒL[„", i);
		scanf("%d", &k);
		s[i] -= k;
	}
	printf("•œ†‰»Ï‚İ•¶š—ñ‚ÍA%s\n", &s[0]);
}