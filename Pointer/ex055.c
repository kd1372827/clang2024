#include<stdio.h>
main()
{
	int a[] = { 11,22,33,44,55,66 };
	float b[] = { 11.1,22.2,33.3,44.4 };
	int* p_a;	//a用ポインタ
	float* p_b;	//b用ポインタ
	int i, ga;	//カウント、a合計用
	float gb;	//b合計用
	p_a = a;	//aのアドレス代入
	for (ga = 0, i = 0; i < 6; i++) {	//aの合計クリア、6回ループ
		ga += *p_a;						//合計に足しこみ
		p_a++;							//ポインタを進める
	}
	printf("配列a\t合計=   %d\t平均=%.3f\n", ga, ga / 6.0);

	p_b = b;	//bのアドレス代入
	for (gb = 0, i = 0; i < 4; i++) {	//bの合計クリア、6回ループ
		gb += *p_b;						//合計に足しこみ
		p_b++;							//ポインタを進める
	}
	printf("配列b\t合計=%.3f\t平均=%.3f\n", gb, gb / 4.0);
}