#include<stdio.h>
main()
{
	char data[] = "Language";
	char sch, * p_data;
	int cnt=1,flg=0;
	p_data = data;
	printf("data[]=%s\n���������́H ",&*p_data);
	scanf("%c",&sch );
	printf("�������ʂ́A");
	//*p_data	���ł�����
	while (*p_data!='\0') {
		if (*p_data == sch) {
			printf("%d�A", cnt);
			flg++;
		}
		p_data++;
		cnt++;
	}
	if (flg > 0) {
		printf("\b�����ڂł�");
	}
	else {
		printf("������Ȃ�����");
	}
}