#include<stdio.h>
main()
{
	char* p = "Nippon";
	int cnt;
	for (cnt=0; *p != '\0';cnt++, p++);
	cnt--;
	p--;
	printf("�t���ɕ\������ƁA");
	for (;cnt>=0  ;cnt--, p--) {
		printf("%c", *p);
	}
}