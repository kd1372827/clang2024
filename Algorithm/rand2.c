#include<stdio.h>
#include<stdlib.h> //�������g���Ƃ��ɕK�v�ł�
#include<time.h> //�������g���Ƃ��ɕK�v�ł�

main()
{
	int dice;

	srand(time(0));
	rand();
	dice = rand() % 6 + 1;
	printf("�T�C�R����%d�ł�\n", dice);
}