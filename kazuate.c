#include<stdio.h>
#include<stdlib.h> //�������g���Ƃ��ɕK�v�ł�
#include<time.h> //�������g���Ƃ��ɕK�v�ł�

main()
{
	int kazu, num,i;
	srand(time(0));
	kazu = rand() % 100 + 1;
	for (i = 1;; i++) {
		printf("1�`100�̐��������:");
		scanf("%d", &num);
		if (num < kazu) {
			printf("%d���傫���ł�\n\n", num);
		}
		if (num > kazu) {
			printf("%d��菬�����ł�\n\n", num);
		}
		if (num == kazu) {
			printf("������A%d��ڂœ��Ă�", i);
			break;
		}
	}
}