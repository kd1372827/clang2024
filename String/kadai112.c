#include<stdio.h>
main()
{
	char data1[20] = "abcde";
	char data2[20];
	int i = 0;
	printf("�z��data1[]=%s", &data1[0]);
	for (i = 0; data1[i] != '\0'; i++) {
		data2[i] = data1[i];
	}
	data2[i] = '\0';
	printf("\n�z��data2[]=%s\n", &data2[0]);
}