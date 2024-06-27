#include<stdio.h>
main()
{
	int i, s;
	int d[10] = { 10,5,30,77,16,3,47,29,37,33 };
	printf("探索値を入力：");
	scanf("%d", &s);
	for (i = 0; i < 10; i++) {
		printf("i=%d\n", i);
		if (s == d[i]) {
			//printf("d[%d]に見つかった\n", i);
			break;
		}
	}
	//printf("ループ終了\ni=%d\n", i);
	if (i == 10) {
		printf("%dは見つからなかった", s);
	}
	else {
		printf("%dはd[%d]に見つかった\n", s, i);
	}
}