#include<stdio.h>
#include<stdlib.h> //乱数を使うときに必要です
#include<time.h> //乱数を使うときに必要です

main()
{
	int un;
	srand(time(0));
	rand();
	un = rand() % 5 + 1;
	printf("今日の運勢は、");
	for(int i=0;i<un;i++){
		printf("☆ ");
	}
	printf("です。\n");
}