#include<stdio.h>
main()
{
	int s=0;
	printf("文字コード(-1で終了)？");
	scanf("%d", &s);
	while (s != -1) {
		printf("%c\n", s);
		printf("文字コード(-1で終了)？");
		scanf("%d", &s);	
	}
}