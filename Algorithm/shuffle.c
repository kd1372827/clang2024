#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i, data[20];
	int target, work;
	for (i = 0; i < 20; i++) {
		data[i] = i + 1;
		//printf("data[%d]=%d\n",i,data[i]);
	}
	srand(time(0));
	//printf("ƒVƒƒƒbƒtƒ‹Œã\n");
	for (i = 0; i < 20; i++) {
		target = rand() % 20;
		//i”Ô–Ú‚Ætarget”Ô–Ú‚Ì“ü‚ê‘Ö‚¦
		work = data[i];
		data[i] = data[target];
		data[target] = work;
		printf("data[%d]=%d\n", i, data[i]);
	}
}