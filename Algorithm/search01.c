#include<stdio.h>
main()
{
	int i, s;
	int d[10] = { 10,5,30,77,16,3,47,29,37,33 };
	printf("�T���l����́F");
	scanf("%d", &s);
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