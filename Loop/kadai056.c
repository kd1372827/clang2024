#include<stdio.h>
main()
{
	char ia;
	printf("アルファベット小文字？");
	scanf("%c", &ia);
	for (int i = 0; ia+i!=0x7A+1; i++) {
		printf("%c ", ia+i );
	}
}
