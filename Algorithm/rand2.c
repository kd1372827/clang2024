#include<stdio.h>
#include<stdlib.h> //乱数を使うときに必要です
#include<time.h> //乱数を使うときに必要です

main()
{
	int dice;

	srand(time(0));
	rand();
	dice = rand() % 6 + 1;
	printf("サイコロは%dです\n", dice);
}