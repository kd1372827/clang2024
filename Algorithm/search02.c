#include<stdio.h>
main()
{
	int i, s;
	int d[11] = { 10,5,30,77,16,3,47,29,37,33 };
	printf("�T���l����́F");
	scanf("%d", &s);
	for (d[10] = s, i = 0; s != d[i]; i++) {
	}
	/*d[10] = s;
	i = 0;
	while (s != d[i]) {
		i++;
	}*/
	if (i == 10) {
		printf("%d�͌�����Ȃ�����", s);
	}
	else {
		printf("�T���l%d��d[%d]�Ō�������\n", s, i);
	}
}