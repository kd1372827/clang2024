#include<stdio.h>
main()
{
	int a = 5;					//宣言の時に初期化することもできます

	float b;
	printf("a/2=%d \n", a / 2);	//整数同士の除算5/2=2.5切り捨てられて→b=2
	b = a / 2;
	printf("a/2=%f \n", b);		//小数点以下を扱う場合
	printf("a/2=%f \n", a / 2.0);
}