#include<stdio.h>
main()
{
	int tbl[][3] = { {10,20,30},
					 {40,50,60},
					 {70,80,90} };
	int* p_tbl, i;
	p_tbl = tbl[0];//�O�s�ڂ̐擪�A�h���X
	//p_tbl = tbl;//�z��̐擪�A�h���X
	//p_tbl = &tbl[0][0];//���J�Ȕz��̐擪�A�h���X


	printf("2�����z��tbl�̓��e\n");
	for (i = 0; i < (3 * 3); i++) {
		printf("%d ", *p_tbl++);//*p_tbl�i�\���j��p_tbl++�i�{���P�j�����킹������
	}
}