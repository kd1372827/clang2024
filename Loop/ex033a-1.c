#include<stdio.h>
main() {
	int cnti, datas, sumg;
	float ave;

	sumg = 0;
	cnti = 0;

	printf("���́H");
	scanf("%d", &datas);
	for (; datas != -999; ) {
		//sum��data�𑫂�����
		sumg += datas;
		//cnt�𑝂₷
		cnti++;
		printf("���́H");
		scanf("%d", &datas);
	}
	ave = (float)sumg / cnti;
	printf("���v��%d	���ρ�%.2f", sumg, ave);
}