#include<stdio.h>
main()
{
	int a, b, c, r;

	printf("3つの整数を空白で区切って入力：");
	r = scanf("%d%d%d", &a, &b, &c);
	printf("r=%d a=%d b=%d c=%d\n", r, a, b, c);

	printf("整数を入力(ctrl+Zで終了)a：");
	while (scanf("%d", &a) != EOF)
	{
		printf("a=%d\n", a);
		printf("整数を入力(ctrl+Zで終了)a：");
	}//三回押さないと終わらないのは仕様
}