#include<stdio.h>
main()
{
	int a, b;
	char c;
	printf("����1�H");
	scanf("%d", &a);
	printf("����2�H");
	scanf("%d", &b);
	printf("���Z�q�H");
	scanf("%c", &c);
	scanf("%c", &c);
	switch (c) {
	case '+': printf("%d+%d=%d", a, b, a + b);
		break;
	case '-': printf("%d-%d=%d", a, b, a - b);
		break;
	case '*': printf("%d*%d=%d", a, b, a * b);
		break;
	case '/': printf("%d/%d=%d", a, b, a / b);
		break;
	case '%': printf("%d+%d=%d", a, b, a % b);
		break;
	}
}