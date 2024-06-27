#include<stdio.h>
main()
{
	int s;
	printf("整数(-999で入力終了)");
	scanf("%d", &s);
	while (s != -999) {
		printf("8進数＝%o	16進数＝%X\n", s, s);
		printf("整数(-999で入力終了)");
		scanf("%d", &s);
	}
}