#include<stdio.h>
main() {
	int s, g;
	g = 0;
	while (1)//�������[�v
	{
		printf("�������āF");
		scanf("%d", &s);
		if (s == -999) {
			break;
		}
		g += s;
	}
	printf("���v��%d", g);
}