#include<stdio.h>
int strcnt(char* p);
main()
{
	char buf[256];
	int mojisu;
	printf("������H�F");
	gets(buf);
	mojisu = strcnt(buf);
	printf("���͂��ꂽ������̕�������%d�����ł�\n", mojisu);
}

strcnt(char* p)
{
	int cnt = 0;
	for (cnt = 0; *p != '\0'; cnt++, p++);
	return(cnt);
}