#include<stdio.h>
main()
{
	char* p = "Nippon";
	int cnt;
	for (cnt=0; *p != '\0';cnt++, p++);
	cnt--;
	p--;
	printf("‹t‡‚É•\Ž¦‚·‚é‚ÆA");
	for (;cnt>=0  ;cnt--, p--) {
		printf("%c", *p);
	}
}