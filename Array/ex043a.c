#include<stdio.h>
main() {
	char data[] = "orange";
	int i = 0;
	printf("������F");
	printf("%s\n", &data[0]);
	while (data[i] != '\0') {
		i++;
	}
	printf("��������%d����\n",i);
}