#include<stdio.h>
main()
{
	int sum, num;
	sum = 0;
	//�������[�v
	while (1)
	{
		printf("��������");
		scanf("%d",&num);
		if (num==-999)
		{
			break; //�E�o
		}
		sum += num;
	}
	printf("���v=%d\n", sum);
}