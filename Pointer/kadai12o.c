#include<stdio.h>
main()
{
	char* p = "pointer test program";
	char save[256];
	char** pp;
	pp = &p;
	save= & pp;
	printf("”z—ñ save[]=%s",save);
}