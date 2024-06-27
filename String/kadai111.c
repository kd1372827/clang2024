#include<stdio.h>
main()
{
	char data[] = "abcde";
	for (int i = 0; data[i] != '\0'; i++) {
		printf("%c", data[i]);
	}
}