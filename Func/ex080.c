#include<stdio.h>
#define TBL_END 5			/*�}�N��*/
int tbl_gokei4(int* p);		/*�v���g�^�C�v�錾*/
main()
{
	int a[] = { 10,20,30,40,50 }, gokei;
	gokei = tbl_gokei4(a);
	printf("gokei=%d\n", gokei);
}

//�֐�tbl_gokei4�̋L�q
int tbl_gokei4(int*p)
{
	int gokei = 0, i = 0;
	while (i < TBL_END) {
		gokei += *(p + i);
		i++;
	}
	/*�������ł�����
	while (i < TBL_END) {
		gokei += *p;
		p++;
		i++;
	}*/
	return(gokei);
}