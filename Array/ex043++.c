#include<stdio.h>
main()
{
	char data[] = "orange";
	int i;
	for (i = 0; data[i] != '\0'; i++);
	//��
	//i = 0;
	//while (data[i] != '\0') {
	//	i++;
	//}
	printf("������:%s\n", data);
	printf("��������%d����", i);
}