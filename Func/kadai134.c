#include<stdio.h>
main()
{
	char c;
	char dumy[256];
	printf("����(^Z�ŏI��)");

	while (scanf("%s", &c) != EOF) {
		printf("%s", &c);
		putchar('\n');
		gets(dumy);
		printf("����(^Z�ŏI��)");
	}
}