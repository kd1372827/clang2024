#include<stdio.h>
main()
{
	int s;
	int g = 0;
	float cnt = 1.0;
	printf("����(^Z�ŏI��)");
	while(scanf("%d", &s)!=EOF) {
		g += s;
		cnt++;
		printf("����(^Z�ŏI��)");
	}
	cnt--;
	printf("���v��%d\n���ρ�%.1f", g, g / cnt);
}