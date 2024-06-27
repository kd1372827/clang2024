#include<stdio.h>
#include<stdlib.h> //乱数を使うときに必要です
#include<time.h> //乱数を使うときに必要です

main()
{
	int kazu, num, cnt;
	cnt = 0;
	srand(time(0));
	kazu = rand() % 100 + 1;
	while (1) {
		printf("1～100の数字を入力:");
		scanf("%d", &num);
		cnt++;
		if (num < kazu) {
			printf("%dより大きいです\n\n", num);
		}
		else if (num > kazu) {
			printf("%dより小さいです\n\n", num);
		}
		else {
			printf("当たり、%d回目で当てた", cnt);
			break;
		}
	}
}