#include<stdio.h>
struct profile {
	char	name[20];
	int		birth[3];
	char	blood[5];
};
int main(void)
{
	struct profile data;
	printf("名前を入力：");
	gets(data.name );	//空白を含む文字列も入力できる
	printf("生年月日を空白で区切って入力：");
	scanf("%d%d%d",&data.birth[0],&data.birth[1],&data.birth[2]);
	printf("血液型を入力：");
	scanf("%s", data.blood);

	printf("%sーー%d年%d月%d日生 血液型ー%s型", data.name,
		data.birth[0],data.birth[1],data.birth[2], data.blood);
}