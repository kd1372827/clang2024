#include<stdio.h>
main()
{
	char c;
	char dumy[256];
	printf("文字(^Zで終了)");
	c = getchar();
	while (c != EOF) {	//データの入力完了 ctrl+Z
		printf("%c", c);
		putchar('\n');
		gets(dumy);		//入力バッファのクリア
		
		printf("文字(^Zで終了)");
		c = getchar();
	}
}