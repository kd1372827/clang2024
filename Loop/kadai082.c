#include<stdio.h>
main()
{
	int a, i = 0, g = 0;
	while (1) {
		printf("����(-999�ŏI��)�H");
		scanf("%d", &a);
		if (a == -999) {
			break;
		}
		if (a < 0) {
			continue;
		}
		g += a;
		i++;
	}
	printf("���v��%d\n���ρ�%.3f", g, (float)g / i);
}