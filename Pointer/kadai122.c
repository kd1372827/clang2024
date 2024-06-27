#include<stdio.h>
main() {
	int a = 5, b = 30, wrk, * p_a = &a, * p_b = &b, * p_wrk = &wrk;
	/*実行前の値の表*/
	puts("実行前");
	printf("a=%d b=%d\n", *p_a, *p_b);
	p_wrk = p_a;
	/*アドレス交換による入れ替え＆実行後の値表示*/
	p_a = p_b;
	p_b = p_wrk;
	puts("実行後");
	printf("a=%d b=%d\n", *p_a, *p_b);
}