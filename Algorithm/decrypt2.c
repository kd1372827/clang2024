#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	char s[20];
	int i,k;
	printf("���������͂��Ă���������");
	scanf("%s", &s[0]);
	srand(time(0));
	for (i = 0; s[i] !='\0'; i++) {
		printf("s[%d]�̕������L�[��", i);
		scanf("%d", &k);
		s[i] -= k;
	}
	printf("�������ςݕ�����́A%s\n", &s[0]);
}