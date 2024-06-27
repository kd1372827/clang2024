#include<stdio.h>
main()
{
	char a[100], b[100];
	int i, j;
	printf("•¶š—ñ1H");
	gets(a);
	printf("•¶š—ñ2H");
	gets(b);
	for (i = 0; a[i] != '\0'; i++);
	for (j = 0; b[j] != '\0'; i++, j++) {
		a[i] = b[j];
	}
	a[i] = '\0';
	printf("%s", &a);
}