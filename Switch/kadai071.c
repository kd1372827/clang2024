#include<stdio.h>
main()
{
	int a, b;
	char c;
	printf("整数1？");
	scanf("%d", &a);
	printf("整数2？");
	scanf("%d", &b);
	printf("演算子？");
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