#include<stdio.h>
main()
{
	char data[] = "Language";
	char sch, * p_data;
	int cnt=1,flg=0;
	p_data = data;
	printf("data[]=%s\n検索文字は？ ",&*p_data);
	scanf("%c",&sch );
	printf("検索結果は、");
	//*p_data	↓でもいい
	while (*p_data!='\0') {
		if (*p_data == sch) {
			printf("%d、", cnt);
			flg++;
		}
		p_data++;
		cnt++;
	}
	if (flg > 0) {
		printf("\b文字目です");
	}
	else {
		printf("見つからなかった");
	}
}