#include<stdio.h>
main()
{
	char d[] = "Gamesoft";
	int i, cnt = 0;
	for (i = 0; d[i] != '\0'; i++) {
		cnt++;
	}
	printf("文字列=%s\n", &d);
	printf("文字数=%d文字\n", cnt);
}