#include<stdio.h>
main() {
	int i;
	float g = 0, box[3];
	for (i = 0; i < 3; i++) {
		printf("ŽÀ”‚ð“ü—ÍF");
		scanf("%f", &box[i]);
		g += box[i];
	}
	printf("‡Œv‚Í%.2f‚Å‚·\n", g);
	printf("•½‹Ï‚Í%.2f‚Å‚·\n", g / 3);
}