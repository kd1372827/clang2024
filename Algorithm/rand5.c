#include<stdio.h>
#include<stdlib.h> //�������g���Ƃ��ɕK�v�ł�
#include<time.h> //�������g���Ƃ��ɕK�v�ł�

main()
{
	int i;
	srand(time(0));
	for (i = 0; i < 100; i++) {
		rand();
		printf("%4d", rand() % 300 + 1);
		if (i % 10 == 0) {
			printf("\n");
		}
	}
}