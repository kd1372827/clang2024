#include<stdio.h>
main()
{
	int tbl[][3] = { {10,20,30},
					 {40,50,60},
					 {70,80,90} };
	int* p_tbl, i;
	p_tbl = tbl[0];//０行目の先頭アドレス
	//p_tbl = tbl;//配列の先頭アドレス
	//p_tbl = &tbl[0][0];//丁寧な配列の先頭アドレス


	printf("2次元配列tblの内容\n");
	for (i = 0; i < (3 * 3); i++) {
		printf("%d ", *p_tbl++);//*p_tbl（表示）とp_tbl++（＋＝１）を合わせたもの
	}
}