#include<stdio.h>
main()
{
	float a, b;
	printf("�Q�̎����l");
	scanf("%f%f", &a, &b);
	if (a > b) {
		printf("�傫���ق���=%f", a);
	}
	if (a < b) {
		printf("�傫���ق���=%f", b);
	}
	if (a == b) {
		printf("�����l�ł�");
	}
}