#include<stdio.h>
main()
{
	char a[20] = "mikan";
	char b[20];
	char* p_a, *p_b;
	p_a = a;
	p_b = b;
	p_b = p_a;
	printf("�R�s�[��̕�����%s", p_b);
}