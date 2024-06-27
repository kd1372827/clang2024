#include<stdio.h>
main()
{
	int s[256], i=0,cnt=0, max, min;
	
	printf("®”(^Z‚ÅI—¹)");
	while (scanf("%d", &s[i]) != EOF) {
		i++;
		cnt++;
		printf("®”(^Z‚ÅI—¹)");
	}
	i--;
	cnt--;
	max = s[i];
	min = s[i];
	for (i = cnt; i >= 0; i--) {
		if (max < s[i]) {
			max = s[i];
		}
	}
	for (i=cnt; i >= 0; i--) {
		if (min > s[i]) {
			min = s[i];
		}
	}
	printf("max=%d\nmin=%d", max, min);
}