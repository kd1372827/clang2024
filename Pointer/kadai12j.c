#include<stdio.h>
main()
{
	char a[20] = "ringo";
	char b[20];
	char* p_a, * p_b;
	int i, j;
	p_a = &a[0];
	p_b = &b[0];
	for (i = 0; *p_a != '\0'; i++, p_a++);
	i--;
	p_a--;
	while(i>=0){
		*p_b = *p_a;
		p_a--;
		p_b++;
		i--;
	}
	*p_b = '\0';
	p_b = &b[0];
	printf("ƒRƒs[æ‚Ì•¶š—ñ%s", p_b);
}