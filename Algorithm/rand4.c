#include<stdio.h>
#include<stdlib.h> //�������g���Ƃ��ɕK�v�ł�
#include<time.h> //�������g���Ƃ��ɕK�v�ł�

main()
{
	int un;
	srand(time(0));
	rand();
	un = rand() % 5 + 1;
	printf("�����̉^���́A");
	for(int i=0;i<un;i++){
		printf("�� ");
	}
	printf("�ł��B\n");
}