#include<stdio.h>
main()
{
	int i, s;
	int d[11] = { 10,5,30,77,16,3,47,29,37,33 };
	printf("探索値を入力：");
	scanf("%d", &s);
	for (d[10] = s, i = 0; s != d[i]; i++) {
	}
	/*d[10] = s;
	i = 0;
	while (s != d[i]) {
		i++;
	}*/
	if (i == 10) {
		printf("%dは見つからなかった", s);
	}
	else {
		printf("探索値%dはd[%d]で見つかった\n", s, i);
	}
}