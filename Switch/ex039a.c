#include<stdio.h>
main() {
	int o, p, q, g = 0;
	char c;
	printf("処理を入力");
	scanf("%c", &c);
	printf("整数を入力");
	scanf("%d %d %d", o, p, q);
	switch (c) {
		if (c >= 0x5A && c <= 0x42) {
			c + 0x20;
	case 'd':printf("最大値は %d です");
		break;

	case 's':printf("最小値は %d です");
		break;

	case 'g':g = o + p + q;
		printf("合計は %d です", g);
		break;

	case 'h':g = o + p + q;
		printf("平均は %.2f です", (float)g / 3);
		break;
		}
	}
}