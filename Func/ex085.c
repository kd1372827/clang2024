#include<stdio.h>
void str_Cat(char* s1, char* s2);
main()
{
	char a[256], b[256];

	printf("配列a：");
	gets(a);
	printf("配列b：");
	gets(b);
	str_Cat(a, b);
	printf("配列a：%s\n", a);
}

//文字列1に文字列2を連結させる
// 戻り値	：なし
// 引　数	：char*s1・文字列1
//			：char*s2・文字列2
void str_Cat(char* s1, char* s2)
{
	int i, j;

	for (i = 0; *(s1 + i) != '\0'; i++);
	for (j = 0; *(s1 + i) = *(s2 + j); i++, j++);
}