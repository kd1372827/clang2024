#include<stdio.h>
main()
{
	char str1[128];
	char str2[128];
	char* ps1, * ps2;
	ps1 = str1;
	ps2 = str2;
	printf("•¶š—ñ‚PH");
	scanf("%s", &*ps1);
	printf("•¶š—ñ‚QH");
	scanf("%s", &*ps2);
	for (; *ps1 != '\0';ps1++);
	for (; *ps2 != '\0'; ps1++, ps2++) {
		*ps1 = *ps2;
	}
	ps1 = str1;
	printf("%s", ps1);
}