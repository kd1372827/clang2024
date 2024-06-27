#include<stdio.h>
#include<stdlib.h> //乱数を使うときに必要です
#include<time.h> //乱数を使うときに必要です

main()
{
	int k;
	srand(time(0));
	rand();
	k = rand() % 101 + 1;
	if (k <= 30) {
		printf("かいしんのいちげき！");
	}
	else{ 
		printf("通常攻撃");
	}
}