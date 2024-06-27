#include<stdio.h>
void reverse(char* p_str1, char* p_str2);
main()
{
	char str1[100], str2[100];

	printf("•¶š—ñHF");
	scanf("%s", str1);
	reverse(str1, str2);
	printf("str1=%s\n", str1);
	printf("str2=%s\n", str2);
}

void reverse(char* p_str1, char* p_str2)
{
	int cnt;
	for (cnt = 0; *p_str1 != '\0'; cnt++, p_str1++);
	p_str1--;
	cnt--;

	while (cnt >= 0) {
		*p_str2 = *p_str1;
		p_str1--;
		p_str2++;
		cnt--;
	}
	*p_str2 = '\0';
	return;
}