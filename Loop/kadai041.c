#include<stdio.h>
main()
{
	int s,i=0,g=0;
	printf("����(-999�ŏI��)?");
	scanf("%d", &s);
	while (s != -999) {
		g += s;
		printf("����(-999�ŏI��)?");
		scanf("%d", &s);
		i++;
	}
	printf("���v��%d\n���ρ�%.2f", g, (float)g / i);
}