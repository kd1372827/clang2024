#include<stdio.h>
main()
{
	int i, num, sum;
	num = 0;
	sum = 0;
	for (i=0; num != -999; i++)
	{
		sum += num;//���v�l�̌v�Z
		printf("���́H");
		scanf("%d", &num);
	}
	                                //�L���X�g(�^�ϊ�)
	printf("���v=%d ����=%.2f", sum, (float)sum /( i-1));
}