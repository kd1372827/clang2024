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
		printf("%d�l��\n",i+1);
		printf("���O����́F");
		scanf("%s", p->name);
		printf("���N�������󔒂ŋ�؂��ē��́F");
		scanf("%d%d%d", &p->birth[0], &p->birth[1], &p->birth[2]);
		printf("���t�^����́F");
		scanf("%s", p->blood);
		printf("----------------------------\n");
	}

	p = data;
	for (int i = 0; i < 5; i++, p++) {
		if (*p->blood == 'B' || *p->blood == 'O'){
			continue;
		}
		else if (*p->blood == 'A') {
			printf("%d�l��\n", i + 1);
			printf("%6s�[�[%4d�N%2d��%2d���� ���t�^�[%s�^\n", p->name,
				p->birth[0], p->birth[1], p->birth[2], p->blood);
			printf("----------------------------\n");
		}
	}
}