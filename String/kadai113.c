#include<stdio.h>
main()
{
	char d[] = "Gamesoft";
	int i, cnt = 0;
	for (i = 0; d[i] != '\0'; i++) {
		cnt++;
	}
	printf("������=%s\n", &d);
	printf("������=%d����\n", cnt);
}