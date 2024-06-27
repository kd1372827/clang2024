#include<stdio.h>
main()
{
	int data[10] = { 10,9,1,20,45,21,38,45,88 }, mx, mn;
	int* p_d;
	p_d = data;
	printf("配列の内容\ndata[]=");
	for (int i = 0; i < 9; i++) {
		printf("%d,", *(p_d + i));
	}
	mx = *p_d;
	for (int i = 0; i < 9; i++) {
		if (mx < *(p_d + i)) {
			mx = *(p_d + i);
		}
	}
	p_d = data;
	mn = *p_d;
	for (int i = 0; i < 9; i++) {
		if (mn > *(p_d + i)) {
			mn = *(p_d + i);
		}
	}
	printf("\b \n最大値＝%d", mx);
	printf("\n最小値＝%d\n", mn);
}