#include<stdio.h>
main() {
	int i,s;
	printf("数を入れて：");
	scanf("%d" ,& s); 
		for (i = 1; i <= 5; i++){
			printf("%d ", s * i);
	}
		printf("\b\n");
}