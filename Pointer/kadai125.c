#include<stdio.h>
main()
{
	int data[10] = { 10,20,30,40,50,60,70,80,-999 };
	int* p_d;
	int i;

	p_d = data;
	printf("ポインタを固定で表示\n配列 data[] = ");
	for (i = 0; *(p_d + i) != -999; i++) {
		printf("%d,",*(p_d+i) );
	}
	printf("\b \n");

	printf("ポインタを変化させて表示\n配列 data[] = ");
	while (*p_d != -999) {
		printf("%d,", *p_d);
		p_d++;
	}
	printf("\b \n");
}