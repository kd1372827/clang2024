#include<stdio.h>
main()
{
	char data[] = "Language";
	char sch, * p_data;
	int cnt=1,flg=0;
	p_data = data;
	printf("data[]=%s\nŒŸõ•¶Žš‚ÍH ",&*p_data);
	scanf("%c",&sch );
	printf("ŒŸõŒ‹‰Ê‚ÍA");
	//*p_data	«‚Å‚à‚¢‚¢
	while (*p_data!='\0') {
		if (*p_data == sch) {
			printf("%dA", cnt);
			flg++;
		}
		p_data++;
		cnt++;
	}
	if (flg > 0) {
		printf("\b•¶Žš–Ú‚Å‚·");
	}
	else {
		printf("Œ©‚Â‚©‚ç‚È‚©‚Á‚½");
	}
}