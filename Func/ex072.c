#include<stdio.h>
void display(int a);

main()
{
	int a;
	printf("data ?:");
	scanf(" %d", &a);
	display(a);		/*�֐�display�̌Ăяo��*/
}

/*�֐��f�B�X�v���C�̋L�q*/
void display(int a)
{
	printf("���̓f�[�^=%d\n", a);
	return;
}