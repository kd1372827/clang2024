#include<stdio.h>
main()
{
	char a[20] = "mikan to ringo";
	char* pa;
	pa = &a[0];
	printf("空白を除いた配列内容＝");
	for (int i = 0; *pa != '\0'; i++) {
		printf("%c", *pa);
		if (*pa == ' ') {
			printf("\b");
		}
		pa++;
	}
}