#include<stdio.h>
main()
{
	char a[20] = "mikan";
	char b[20];
	char* p_a, *p_b;
	p_a = a;
	p_b = b;
	p_b = p_a;
	printf("コピー先の文字列＝%s", p_b);
}