#include<stdio.h>
struct profile {
	char	name[20];
	int		birth[3];
	char	blood[5];
};
int main(void)
{
	struct profile data[5];
	struct profile* p;
	p = data;
	for (int i = 0; i < 5; i++, p++) {
		printf("%d人目\n",i+1);
		printf("名前を入力：");
		scanf("%s", p->name);
		printf("生年月日を空白で区切って入力：");
		scanf("%d%d%d", &p->birth[0], &p->birth[1], &p->birth[2]);
		printf("血液型を入力：");
		scanf("%s", p->blood);
		printf("----------------------------\n");
	}

	p = data;
	for (int i = 0; i < 5; i++, p++) {
		if (*p->blood == 'B' || *p->blood == 'O'){
			continue;
		}
		else if (*p->blood == 'A') {
			printf("%d人目\n", i + 1);
			printf("%6sーー%4d年%2d月%2d日生 血液型ー%s型\n", p->name,
				p->birth[0], p->birth[1], p->birth[2], p->blood);
			printf("----------------------------\n");
		}
	}
}