#include<stdio.h>
main()
{
	int a, b, c, r;

	printf("3�̐������󔒂ŋ�؂��ē��́F");
	r = scanf("%d%d%d", &a, &b, &c);
	printf("r=%d a=%d b=%d c=%d\n", r, a, b, c);

	printf("���������(ctrl+Z�ŏI��)a�F");
	while (scanf("%d", &a) != EOF)
	{
		printf("a=%d\n", a);
		printf("���������(ctrl+Z�ŏI��)a�F");
	}//�O�񉟂��Ȃ��ƏI���Ȃ��͎̂d�l
}