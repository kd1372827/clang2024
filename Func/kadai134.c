#include<stdio.h>
main()
{
	char c;
	char dumy[256];
	printf("文字(^Zで終了)");

	while (scanf("%s", &c) != EOF) {
		printf("%s", &c);
		putchar('\n');
		gets(dumy);
		printf("文字(^Zで終了)");
	}
}