#include<stdio.h>
main()
{
	double data[5] = { 10.8,20.3,30.6,40.4,50.5 },g=0;
	double* p_d;
	p_d = data;
	printf("”z—ñdata[]=");
	for (int i = 0; i < 5; i++) {
		printf("%f,", *(p_d + i));
		g += *(p_d + i);
	}
	printf("\b \n‡Œv%.3f", g);
	printf("\n•½‹Ï%.3f", g/5);
}