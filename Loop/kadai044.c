#include<stdio.h>
main()
{
	int s;
	printf("����(-999�œ��͏I��)");
	scanf("%d", &s);
	while (s != -999) {
		printf("8�i����%o	16�i����%X\n", s, s);
		printf("����(-999�œ��͏I��)");
		scanf("%d", &s);
	}
}