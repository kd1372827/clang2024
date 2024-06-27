#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	char s[20], k[20] ;
	int i;
	printf("文字列を入力してください＞");
	scanf("%s", &s[0]);
	srand(time(0));
	for (i = 0; k[i] !=k[19]; i++) {
		k[i] = rand() % 10;
	}
	for (i = 0; s[i] != '\0'; i++) {
		s[i] += k[i];
	}
	printf("暗号化文字列は、%s\n", &s[0]);
	printf("暗号化キーは、");
	for (i = 0; s[i] != '\0'; i++) {
		printf("%d",k[i]);
	}//2-1あり
}
