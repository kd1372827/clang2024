#include<stdio.h>
main()
{
	int a, i = 0, g = 0;
	printf("整数(-999で終了)？");
	scanf("%d", &a);
	while (1) {
		g += a;
		i++;
		printf("整数(-999で終了)？");
		scanf("%d", &a);
		if (a == -999) {
			break;
		}
	}
	printf("合計＝%d\n平均＝%.3f", g, (float)g / i);
}