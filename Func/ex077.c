#include<stdio.h>
void hi(int, int, int,int*,int*);
main()
{
	int a, b, c, max, min;
	printf("®”‚ð3‚Â“ü—ÍF");
	scanf("%d%d%d", &a, &b, &c);
	hi(a, b, c, &max, &min);
	printf("Å‘å’l%d Å¬’l%d", max, min);
}

void hi(int x, int y, int z, int* max, int* min)
{
	*max = x;
	if (y > *max) {
		*max = y;
	}
	if (z > *max) {
		*max = z;
	}
	*min = x;
	if (y < *min) {
		*min = y;
	}
	if (z < *min) {
		*min = z;
	}
	return;
}