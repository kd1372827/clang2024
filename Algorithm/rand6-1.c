#include<stdio.h>
#include<stdlib.h> //乱数を使うときに必要です
#include<time.h> //乱数を使うときに必要です

main()
{
	int cte, pte;
	printf("何を出しますか？\n1:グー 2:チョキ 3:パー＞");
	scanf("%d", &pte);
	srand(time(0));
	rand();
	cte = rand() % 3;
	if (pte == 1) {
		printf("プレイヤーは、グーです。\n");
	}
	if (pte == 2) {
		printf("プレイヤーは、チョキです。\n");
	}
	if (pte == 3) {
		printf("プレイヤーは、パーです。\n");
	}
	if (cte == 0) {
		printf("コンピュータは、グーです。");
	}
	if (cte == 1) {
		printf("コンピュータは、チョキです。\n\n");
	}
	if (cte == 2) {
		printf("コンピュータは、パーです。\n\n");
	}
	if (pte - cte == 1) {
		printf("あいこです");
	}
	if (pte - cte == 3) or (pte - cte == 0); {
		printf("プレイヤーの勝ちです。");
	}
	if (pte - cte == 2) or (pte - cte == -1); {
		printf("コンピュータの勝ちです。");
	}
	//あいこはpte-cte=1 p勝ちはpte-cte=3または0 c勝ちはpte-cte=2または-1
}