#include<stdio.h>
#include<stdlib.h> //乱数を使うときに必要です
#include<time.h> //乱数を使うときに必要です

main()
{
	int kazu, num,i;
	srand(time(0));
	kazu = rand() % 100 + 1;
	for (i = 1;; i++) {
		printf("1～100の数字を入力:");
		scanf("%d", &num);
		if (num < kazu) {
			printf("%dより大きいです\n\n", num);
		}
		if (num > kazu) {
			printf("%dより小さいです\n\n", num);
		}
		if (num == kazu) {
			printf("当たり、%d回目で当てた", i);
			break;
		}
	}
}