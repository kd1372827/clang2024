#include<stdio.h>
void nisu(int x, int y, int* go, float* wr);
main()
{
	int a, b, c;
	float d;
	printf("整数を2つ入力：");
	scanf("%d%d", &a, &b);
	nisu(a, b, &c, &d);
	printf("合計は%d、平均は%.2f\n", c, d);
}

void nisu(int x, int y, int* go, float* wr)
{
	*go = x + y;
	*wr = (x + y) / 2.0;
	return;
}