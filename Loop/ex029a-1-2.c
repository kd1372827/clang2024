#include<stdio.h>
main()
{
	int su;
	printf("数を入れて");
	scanf("%d", &su);//ここにマイナスを入れると無限ループ
	while (su) {
		printf("*");
		su--;
	}
}