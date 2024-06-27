#include<stdio.h>
int sho(int* p, int number);
int kou(int* p, int number);
main()
{
	int data[8] = { 6,10,8,2,9,5,1,7 },j;
	printf("ソート方向を入力：");
	scanf("%c", &j);
	if () {
		for()
		printf("%d ", sho(data, 8));
	}
	else if () {
		for()
		printf("%d", kou(data, 8));
	}
}

int sho(int* p, int number)
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

int kou(int* p, int number)
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