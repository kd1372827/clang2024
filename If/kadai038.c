#include<stdio.h>
main()
{
	char m;
	printf("�P�������́H");
	scanf("%c", &m);
	if (m >= 0x41 && m <= 0x5A) {
		m += 0x20;
		printf("�ϊ����ʂ�%c", m);
	}
	else if (m >= 0x61 && m <= 0x7A) {
		m -= 0x20;
		printf("�ϊ����ʂ�%c", m);
	}
}