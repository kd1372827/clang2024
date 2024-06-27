#include<stdio.h>
int strcnt(char* p);
main()
{
	char buf[256];
	int mojisu;
	printf("•¶š—ñHF");
	gets(buf);
	mojisu = strcnt(buf);
	printf("“ü—Í‚³‚ê‚½•¶š—ñ‚Ì•¶š”‚Í%d•¶š‚Å‚·\n", mojisu);
}

strcnt(char* p)
{
	int cnt = 0;
	for (cnt = 0; *p != '\0'; cnt++, p++);
	return(cnt);
}