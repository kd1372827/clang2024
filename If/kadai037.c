#include<stdio.h>
main()
{
	int s;
	printf("0から100までの整数？");
	scanf("%d", &s);
	if (s >= 90 && s <= 100) {
		printf("その数値の判定結果は「５」です");
	}
	else if (s >= 80 && s <90) {
		printf("その数値の判定結果は「４」です");
	}
	else if (s >= 50 && s < 80) {
		printf("その数値の判定結果は「３」です");
	}
	else if (s >= 30 && s < 50) {
		printf("その数値の判定結果は「２」です");
	}
	else {
		printf("その数値の判定結果は「１」です");
	}
}