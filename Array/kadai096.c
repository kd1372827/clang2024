#include<stdio.h>
main()
{
	int a = 0,cnt=0;
	int c[10];
	for (int i = 0; a != -999 || i <= 10; i++) {
		printf("Ž(-999ĹIš)H");
		scanf("%d", &a);
		if (a == -999) {
			break;
		}
		c[i] = a;
		cnt++;
	}
	printf("zńc=");
	for (int i = 0;i<cnt ; i++) {
		printf(" %d", c[i]);
	}
}