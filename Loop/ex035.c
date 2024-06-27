#include<stdio.h>
main()
{
	int sum, num;
	sum = 0;
	//無限ループ
	while (1)
	{
		printf("数を入れて");
		scanf("%d",&num);
		if (num==-999)
		{
			break; //脱出
		}
		sum += num;
	}
	printf("合計=%d\n", sum);
}