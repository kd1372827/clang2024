#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	char s[20];
	int i,k;
	printf("文字列を入力してください＞");
	scanf("%s", &s[0]);
	srand(time(0));
	for (i = 0; s[i] !='\0'; i++) {
		printf("s[%d]の復号化キー＞", i);
		scanf("%d", &k);
		s[i] -= k;
	}
	printf("復号化済み文字列は、%s\n", &s[0]);
}