#include<stdio.h>
main()
{
	char d[20] = "Gamesoft";
	int i, cnt = 0;
	printf("文字列は？");
	scanf("%s", &d);
	for (i = 0; d[i] != '\0'; i++) {
		cnt++;
	}
	printf("文字列=%s\t", &d);
	printf("文字数=%d文字\n", cnt);
}