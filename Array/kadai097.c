#include<stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int c[10],i,cnt=9;
	printf("”z—ña=");
	for (i = 0;i<10; i++,cnt--) {
		printf("%d ",a[i]);
		c[cnt] = a[i];
	}
	printf("\n”z—ñc=");
	for (cnt = 0; cnt < 10; cnt++) {
		printf("%d ", c[cnt]);
	}
	printf("\n");
}