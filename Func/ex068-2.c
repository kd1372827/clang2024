#include<stdio.h>
main()
{
	char str[256];

	while (gets(str)!= NULL)//Ctrl+Z�ŏI��
	{
		puts(str);	//�i�j�̒��̕���������̂܂܏o�͂���
	}				//���s����(\n)�𖖔��ɒǉ�����
}