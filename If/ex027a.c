#include<stdio.h>
main()
{
	char moji;
	printf("��������́F");
	scanf("%c", &moji);
	if (moji>=0x61&&moji<=0x7A) {
		printf("�ϊ������ %c\n", moji - 0x20);
	}//����������啶��
	else {
		if (moji>=0x41&&moji<=0x5A) {
			printf("�ϊ������%c\n", moji + 0x20);
		}//�啶�����珬����
		else {
			printf("�G���[�ł�");
		}
	}
}