#include<stdio.h>
main()
{
	char su;
	su = '1';//1=0x31 0x31-0x30=1でもいい　↓(1)0x31-(0)0x30
	printf("su:%c \n数値に変換:%d\n", su, su-'0');
}