#include<stdio.h>
main()
{
	int a, i = 0, g = 0;
	printf("����(-999�ŏI��)�H");
	scanf("%d", &a);
	while (1) {
		g += a;
		i++;
		printf("����(-999�ŏI��)�H");
		scanf("%d", &a);
		if (a == -999) {
			break;
		}
	}
	printf("���v��%d\n���ρ�%.3f", g, (float)g / i);
}