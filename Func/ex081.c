#include<stdio.h>
int saidai(int* p, int number);
int saisho(int* p, int number);
main()
{
	int data[8] = { 6,10,8,2,9,5,1,7 };
	printf("最大値＝%d\n",saidai(data,8));
	printf("最小値＝%d\n",saisho(data,8));
}

int saidai(int* p, int number)
{
	int dai, i = 0;
	dai = *p;
	while (i < number-1) {
		p++;
		if (dai < *p) {
			dai = *p;
		}
		i++;
	}
	return(dai);
}

int saisho(int* p, int number)
{
	int sho, i = 0;
	sho = *p;
	while (i < number-1) {
		p++;
		if (sho > *p) {
			sho = *p;
		}
		i++;
	}
	return(sho);
}