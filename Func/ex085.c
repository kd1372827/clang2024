#include<stdio.h>
void str_Cat(char* s1, char* s2);
main()
{
	char a[256], b[256];

	printf("�z��a�F");
	gets(a);
	printf("�z��b�F");
	gets(b);
	str_Cat(a, b);
	printf("�z��a�F%s\n", a);
}

//������1�ɕ�����2��A��������
// �߂�l	�F�Ȃ�
// ���@��	�Fchar*s1�E������1
//			�Fchar*s2�E������2
void str_Cat(char* s1, char* s2)
{
	int i, j;

	for (i = 0; *(s1 + i) != '\0'; i++);
	for (j = 0; *(s1 + i) = *(s2 + j); i++, j++);
}