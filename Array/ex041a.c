#include<stdio.h>
main() {
	int i;
	float g = 0, box[3];
	for (i = 0; i < 3; i++) {
		printf("��������́F");
		scanf("%f", &box[i]);
		g += box[i];
	}
	printf("���v��%.2f�ł�\n", g);
	printf("���ς�%.2f�ł�\n", g / 3);
}