#include<stdio.h>
main()
{
	int ia, ib;
	printf("整数1？");
	scanf("%d", &ia);
	printf("整数2？");
	scanf("%d", &ib);
	if (ia > ib) {
		printf("%dの方が%dより%d大きい", ia, ib, ia - ib);
	}
	else if (ia < ib) {
		printf("%dの方が%dより%d小さい", ia, ib, ib -ia );
	}
	else {
		printf("%dと%dは等しい", ia, ib);
	}
}