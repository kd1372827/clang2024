#include<stdio.h>
main() {
	int i;
	float g = 0, box[3];
	for (i = 0; i < 3; i++) {
		printf("実数を入力：");
		scanf("%f", &box[i]);
		g += box[i];
	}
	printf("合計は%.2fです\n", g);
	printf("平均は%.2fです\n", g / 3);
}