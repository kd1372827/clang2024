#include<stdio.h>
#define TBL_END 5			/*マクロ*/
int tbl_gokei4(int* p);		/*プロトタイプ宣言*/
main()
{
	int a[] = { 10,20,30,40,50 }, gokei;
	gokei = tbl_gokei4(a);
	printf("gokei=%d\n", gokei);
}

//関数tbl_gokei4の記述
int tbl_gokei4(int*p)
{
	int gokei = 0, i = 0;
	while (i < TBL_END) {
		gokei += *(p + i);
		i++;
	}
	/*こっちでもいい
	while (i < TBL_END) {
		gokei += *p;
		p++;
		i++;
	}*/
	return(gokei);
}