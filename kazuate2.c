#include<stdio.h>
#include<stdlib.h> //�������g���Ƃ��ɕK�v�ł�
#include<time.h> //�������g���Ƃ��ɕK�v�ł�

main()
{
	int kazu, num, cnt;
	cnt = 0;
	srand(time(0));
	kazu = rand() % 100 + 1;
	while (1) {
		printf("1�`100�̐��������:");
		scanf("%d", &num);
		cnt++;
		if (num < kazu) {
			printf("%d���傫���ł�\n\n", num);
		}
		else if (num > kazu) {
			printf("%d��菬�����ł�\n\n", num);
		}
		else {
			printf("������A%d��ڂœ��Ă�", cnt);
			break;
		}
	}
}