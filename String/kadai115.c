#include<stdio.h>
main()
{
	char d[20];
	int i;
	printf("������́H");
	scanf("%s", &d);
	for (i = 0; d[i] != '\0'; i++) {
		printf("%c\n", d[i]);
	}
}