#include<stdio.h>
main()
{
	int a, i = 0, g = 0;
	while (1) {
		printf("®”(-999‚ÅI—¹)H");
		scanf("%d", &a);
		if (a == -999) {
			break;
		}
		if (a < 0) {
			continue;
		}
		g += a;
		i++;
	}
	printf("‡Œv%d\n•½‹Ï%.3f", g, (float)g / i);
}