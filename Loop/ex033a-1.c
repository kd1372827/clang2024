#include<stdio.h>
main() {
	int cnti, datas, sumg;
	float ave;

	sumg = 0;
	cnti = 0;

	printf("”‚ÍH");
	scanf("%d", &datas);
	for (; datas != -999; ) {
		//sum‚Édata‚ğ‘«‚µ‚±‚Ş
		sumg += datas;
		//cnt‚ğ‘‚â‚·
		cnti++;
		printf("”‚ÍH");
		scanf("%d", &datas);
	}
	ave = (float)sumg / cnti;
	printf("‡Œv%d	•½‹Ï%.2f", sumg, ave);
}