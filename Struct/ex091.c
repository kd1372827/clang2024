#include<stdio.h>
struct profile {
	char	name[20];
	int		birth[3];
	char	blood[5];
};
int main(void)
{
	struct profile data;
	struct profile* p;
	p = &data;
	printf("–¼‘O‚ð“ü—ÍF");
	gets(p->name);
	printf("¶”NŒŽ“ú‚ð‹ó”’‚Å‹æØ‚Á‚Ä“ü—ÍF");
	scanf("%d%d%d", &p->birth[0], &p->birth[1], &p->birth[2]);
	printf("ŒŒ‰tŒ^‚ð“ü—ÍF");
	scanf("%s", p->blood);

	printf("%s--%d”N%dŒŽ%d“ú¶ ŒŒ‰tŒ^[%sŒ^", p->name, 
		p->birth[0], p->birth[1], p->birth[2], p->blood);
}