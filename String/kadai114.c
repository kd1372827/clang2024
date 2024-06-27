#include<stdio.h>
main()
{
	char d[20] = "Gamesoft";
	int i, cnt = 0;
	printf("•¶š—ñ‚ÍH");
	scanf("%s", &d);
	for (i = 0; d[i] != '\0'; i++) {
		cnt++;
	}
	printf("•¶š—ñ=%s\t", &d);
	printf("•¶š”=%d•¶š\n", cnt);
}