#include<stdio.h>
main()
{
	char a[20] = "mikan to ringo";
	char* pa;
	pa = &a[0];
	printf("�󔒂��������z����e��");
	for (int i = 0; *pa != '\0'; i++) {
		printf("%c", *pa);
		if (*pa == ' ') {
			printf("\b");
		}
		pa++;
	}
}