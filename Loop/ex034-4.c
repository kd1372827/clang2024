#include<stdio.h>
main()
{
	int i, j, num;
	printf("”‚ÍH");
		scanf("%d", &num);
	i = 0;
	do {
		j = 0;
		do{
		printf(" ");
		j++;
		} while (j<num-i);
		j = 0;
		do{
		printf("*");//ex034-4-2.c
		j++;
		} while (j <= i);
		printf("\n");
		i++;
} while (i < num);
}