#include<stdio.h>
#include<stdlib.h> //�������g���Ƃ��ɕK�v�ł�
#include<time.h> //�������g���Ƃ��ɕK�v�ł�

main()
{
	int k;
	srand(time(0));
	rand();
	k = rand() % 101 + 1;
	if (k <= 30) {
		printf("��������̂��������I");
	}
	else{ 
		printf("�ʏ�U��");
	}
}