#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	char s[20], k[20] ;
	int i;
	printf("���������͂��Ă���������");
	scanf("%s", &s[0]);
	srand(time(0));
	for (i = 0; k[i] !=k[19]; i++) {
		k[i] = rand() % 10;
	}
	for (i = 0; s[i] != '\0'; i++) {
		s[i] += k[i];
	}
	printf("�Í���������́A%s\n", &s[0]);
	printf("�Í����L�[�́A");
	for (i = 0; s[i] != '\0'; i++) {
		printf("%d",k[i]);
	}//2-1����
}
