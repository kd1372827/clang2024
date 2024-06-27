#include<stdio.h>
main()
{
	int data[] = { 10,5,23,29,2,6,3,1,70,100 };
	int max, min, i = 0;
	printf("”z—ñ data=");
	max = data[i];
	for (i = 0; i < 10; i++) {
		printf("%d ", data[i]);
		if (max < data[i]) {
			max = data[i];
		}
	}
	i = 0;
	min = data[i];
	for (i = 0; i < 10; i++) {
		if (min > data[i]) {
			min = data[i];
		}
	}
	printf("\nÅ‘å’l=%d\tÅ¬’l=%d", max, min);
}