#include<stdio.h>
main()
{
	char d[20] = "Gamesoft";
	int i, cnt = 0;
	printf("������́H");
	scanf("%s", &d);
	for (i = 0; d[i] != '\0'; i++) {
		cnt++;
	}
	printf("������=%s\t", &d);
	printf("������=%d����\n", cnt);
}