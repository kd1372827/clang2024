#include<stdio.h>
main()
{
	char c;
	char dumy[256];
	printf("����(^Z�ŏI��)");
	c = getchar();
	while (c != EOF) {	//�f�[�^�̓��͊��� ctrl+Z
		printf("%c", c);
		putchar('\n');
		gets(dumy);		//���̓o�b�t�@�̃N���A
		
		printf("����(^Z�ŏI��)");
		c = getchar();
	}
}