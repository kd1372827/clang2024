#include<stdio.h>
main()
{
	int i, sum;
	sum=0;
		//初期値　　条件　再初期化式(繰り返しの最後に実行) 
		for (i = 1; i <= 10; i++)
	{
			sum += i; //sum=sum+i
			printf("1から%dまでの和=%d \n", i, sum);
	}
}