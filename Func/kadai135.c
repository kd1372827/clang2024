/*#include<stdio.h>
main()
{
	char a[20] = "ringo";
	char b[20];
	char* p_a, * p_b;
	int i, j;
	p_a = &a[0];
	p_b = &b[0];
	for (i = 0; *pa != '\0'; i++, p_a++);
	i--;
	p_a--;
	while (i >= 0) {
		*pc = *pa;
		pa--;
		pc++;
		i--;
	}
	*pc = '\0';
	pc = &c[0];
	printf("コピー先の文字列＝%s", pc);
}*/
#include<stdio.h>
main()
{
	char c[256];
	char a[256];
	char* pa, * pc;
	pa = &a[0];
	pc = &c[0];
	int i,j;
	char dumy[256];
	printf("文字(^Zで終了)");

	while (scanf("%s", &*pa) != EOF) {
		for (i = 0; *pa != '\0'; i++, pa++);
		i--;
		pa--;
		while (i >= 0) {
			*pc = *pa;
			pa--;
			pc++;
			i--;
		}
		*pc = '\0';
		pc = &c[0];
		printf("% s", pc);
		putchar('\n');
		gets(dumy);
		printf("文字(^Zで終了)");
	}
}