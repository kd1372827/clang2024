#include<stdio.h>
main()
{
	int su, i;
	char m;
	printf("回数と文字列を入力　");
	scanf("%d%s",&su, &m);
	for (i = 0; i < su; i++) {
		printf("%s\t", &m);
	}
}