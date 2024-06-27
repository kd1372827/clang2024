#include<stdio.h>
main()
{
	char iA;
	printf("アルファベット大文字？");
	scanf("%c", &iA);
	for (int i = 0; iA+i!=0x5A+1; i++) {
		printf("%c ", iA+i );
	}
}
