#include<stdio.h>
main()
{
	int i, num, sum;
	num = 0;
	sum = 0;
	for (i=0; num != -999; i++)
	{
		sum += num;//合計値の計算
		printf("数は？");
		scanf("%d", &num);
	}
	                                //キャスト(型変換)
	printf("合計=%d 平均=%.2f", sum, (float)sum /( i-1));
}