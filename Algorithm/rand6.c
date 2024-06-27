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
		if (cte == 0) {
			printf("コンピュータは、グーです。\n\nあいこです。");
		}
		if (cte == 1) {
			printf("コンピュータは、チョキです。\n\nプレイヤーの勝ちです。");
		}
		if (cte == 2) {
			printf("コンピュータは、パーです。\n\nコンピュータの勝ちです。");
		}	
	}
	if (pte == 2) {
		printf("プレイヤーは、チョキです。\n");
		if (cte == 0) {
			printf("コンピュータは、グーです。\n\nコンピュータの勝ちです。");
		}
		if (cte == 1) {
			printf("コンピュータは、チョキです。\n\nあいこです。");
		}
		if (cte == 2) {
			printf("コンピュータは、パーです。\n\nプレイヤーの勝ちです。");
		}
	}
	if (pte == 3) {
		printf("プレイヤーは、パーです。\n");
		if (cte == 0) {
			printf("コンピュータは、グーです。\n\nプレイヤーの勝ちです。");
		}
		if (cte == 1) {
			printf("コンピュータは、チョキです。\n\nコンピュータの勝ちです。");
		}
		if (cte == 2) {
			printf("コンピュータは、パーです。\n\nあいこです。");
		}
	}//あいこはpte-cte=1 p勝ちはpte-cte=3//0 c勝ちはpte-cte=2//-1
}