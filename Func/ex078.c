#include<stdio.h>

int tbl_gokei1(int* p);
int tbl_gokei2(int tbl[]);
int tbl_gokei1b(int* p);

main()
{
	int a[] = { 10,20,30,40,-999 }, gokei;
	gokei = tbl_gokei1(a);
	printf("gokei=%d\n", gokei);
	gokei = tbl_gokei2(a);
	printf("gokei=%d\n", gokei);
	gokei = tbl_gokei3(a);
	printf("gokei=%d\n", gokei);
}

int tbl_gokei1(int* p)
{					/*ポインタで受け取り*/
	int gokei = 0;
	while (*p != -999) {
		gokei += *p;
		p++;
	}
	return(gokei);
}

int tbl_gokei2(int tbl[])
{					/*配列表現で受け取り*/
	int gokei = 0, i = 0;
	while (tbl[i] != -999) {
		gokei += tbl[i];
		i++;
	}
	return(gokei);
}

//教科書にないやり方(3to4niあった)
//ポインタを受け取ったアドレスを
//固定して使ってみる
int tbl_gokei1b(int* p)
{
	int gokei = 0, i;
	i = 0;
	while (*(p + i) != -999) {
		gokei += *(p + i);
		i++;
	}
	return(gokei);
}