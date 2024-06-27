#include<stdio.h>
main()
{
	int s;
	int g = 0;
	float cnt = 1.0;
	printf("®”(^Z‚ÅI—¹)");
	while(scanf("%d", &s)!=EOF) {
		g += s;
		cnt++;
		printf("®”(^Z‚ÅI—¹)");
	}
	cnt--;
	printf("‡Œv%d\n•½‹Ï%.1f", g, g / cnt);
}