#include<stdio.h>
main() {
	int cnti, datas, sumg;
	float ave;

	sumg = 0;
	cnti = 0;

	printf("数は？");
	scanf("%d", &datas);
	for (; datas != -999; ) {
		//sumにdataを足しこむ
		sumg += datas;
		//cntを増やす
		cnti++;
		printf("数は？");
		scanf("%d", &datas);
	}
	ave = (float)sumg / cnti;
	printf("合計＝%d	平均＝%.2f", sumg, ave);
}