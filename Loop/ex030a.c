#include<stdio.h>
main() {
	int su, i = 0;
	printf("��������");
	scanf("%d", &su);
	while (i <= 10) {
		printf("%d+%d=%d\n", su, i, su + i);
		i++;
	}

}