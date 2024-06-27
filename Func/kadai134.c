#include<stdio.h>
main()
{
	char c;
	char dumy[256];
	printf("•¶š(^Z‚ÅI—¹)");

	while (scanf("%s", &c) != EOF) {
		printf("%s", &c);
		putchar('\n');
		gets(dumy);
		printf("•¶š(^Z‚ÅI—¹)");
	}
}