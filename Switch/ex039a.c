#include<stdio.h>
main() {
	int o, p, q, g = 0;
	char c;
	printf("���������");
	scanf("%c", &c);
	printf("���������");
	scanf("%d %d %d", o, p, q);
	switch (c) {
		if (c >= 0x5A && c <= 0x42) {
			c + 0x20;
	case 'd':printf("�ő�l�� %d �ł�");
		break;

	case 's':printf("�ŏ��l�� %d �ł�");
		break;

	case 'g':g = o + p + q;
		printf("���v�� %d �ł�", g);
		break;

	case 'h':g = o + p + q;
		printf("���ς� %.2f �ł�", (float)g / 3);
		break;
		}
	}
}