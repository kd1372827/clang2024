#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i, s;
	int d[10];
	srand(time(0));
	printf("�T���l����́F");
	scanf("%d", &s);
	for (i = 0; i < 10; i++) {
		d[i] = rand() % 30+1;
		}
	for (i = 0; i < 10; i++) {
		printf("i=%d\n", i);
		if (s == d[i]) {
			//printf("d[%d]�Ɍ�������\n", i);
			break;
		}
	}
	//printf("���[�v�I��\ni=%d\n", i);
	if (i == 10) {
		printf("%d�͌�����Ȃ�����", s);
	}
	else {
		printf("%d��d[%d]�Ɍ�������\n", s, i);
	}
}