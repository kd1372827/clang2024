#include<stdio.h>
main()
{
	char data[] = "orange";
	int i,; 
	printf("文字列:");
	i = 0;
	while (data[i] != '\0') {
		printf("%c", data[i]);
		i++;
		}
		printf("\n文字数は%d文字",i);
}