#include<stdio.h>
main()
{
	int sec,h=0,m=0,s=0;
	printf("�b������́F");
	scanf("%d", &sec);
	if (sec >= 0) {
		if (sec <= 5000) {
			h = sec / 3600;
			m = (sec % 3600) / 60;
			s = sec % 60;
			printf("%d����%d��%d�b\n", h, m, s);
		}
		else {
			printf("�G���[\n");
		}
	}
	else {
		printf("�}�C�i�X�̓G���[�ł�\n");
	}
}