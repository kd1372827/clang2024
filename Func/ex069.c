#include<stdio.h>
main()
{
	int num, sum = 0, cnt = 0;

	printf("�����F");
	while (scanf("%d", &num) != EOF) {
		sum += num;
		cnt++;
		printf("�����F");
	}
	printf("���v��%d	���ρ�%.2f", sum, sum / (float)cnt);
}