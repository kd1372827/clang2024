#include<stdio.h>
main()
{
	int i=-1, j=0,g=0;
	do {
		i++;
		g += j;
		printf("����(-999�ŏI��)?");
		scanf("%d", &j);
	} while (j != -999);
	printf("���v��%d\n���ρ�%f",g ,(float)g/i);
}