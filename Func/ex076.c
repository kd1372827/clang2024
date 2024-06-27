#include<stdio.h>
void nisu(int x, int y, int* go, float* wr);
main()
{
	int a, b, c;
	float d;
	printf("®”‚ğ2‚Â“ü—ÍF");
	scanf("%d%d", &a, &b);
	nisu(a, b, &c, &d);
	printf("‡Œv‚Í%dA•½‹Ï‚Í%.2f\n", c, d);
}

void nisu(int x, int y, int* go, float* wr)
{
	*go = x + y;
	*wr = (x + y) / 2.0;
	return;
}