#include<stdio.h>
main()
{
	int a, b;
	while (1) {
		printf("整数1(-999)で終了？");
		scanf("%d", &a);
		printf("整数2(-999)で終了？");
		scanf("%d", &b);
		if (b == 0) {
			continue;
		}
		if (a == -999 || b == -999) {
			break;
		}
		printf("%d/%d=%dあまり%d\n", a, b, a / b, a % b);
	}
}