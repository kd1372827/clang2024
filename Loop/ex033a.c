#include<stdio.h>
main() {
	int i, s = 0, g = 0;
	for (i = 0; s != -999; i++) {
		g = g + s;
		printf("���́H");
		scanf("%d", &s);
	}
	printf("���v��%d	���ρ�%.2f", g, g / (float)(i - 1));
}