#include<stdio.h>
main() {
	int s, g;
	g = 0;
	while (1)//無限ループ
	{
		printf("数を入れて：");
		scanf("%d", &s);
		if (s == -999) {
			break;
		}
		g += s;
	}
	printf("合計＝%d", g);
}