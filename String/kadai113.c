#include<stdio.h>
main()
{
	char d[] = "Gamesoft";
	int i, cnt = 0;
	for (i = 0; d[i] != '\0'; i++) {
		cnt++;
	}
	printf("•¶š—ñ=%s\n", &d);
	printf("•¶š”=%d•¶š\n", cnt);
}