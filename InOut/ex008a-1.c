#include<stdio.h>
main()
{
	int a = 5;					//�錾�̎��ɏ��������邱�Ƃ��ł��܂�

	float b;
	printf("a/2=%d \n", a / 2);	//�������m�̏��Z5/2=2.5�؂�̂Ă��ā�b=2
	b = a / 2;
	printf("a/2=%f \n", b);		//�����_�ȉ��������ꍇ
	printf("a/2=%f \n", a / 2.0);
}