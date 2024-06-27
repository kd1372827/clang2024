#include<stdio.h>
main()
{
	int sec,h=0,m=0,s=0;
	printf("•b”‚ğ“ü—ÍF");
	scanf("%d", &sec);
	if(sec<=5000){
		h = sec / 3600;
		m = (sec % 3600) / 60;
		s = sec % 60;
		printf("%dŠÔ%d•ª%d•b\n", h, m, s);
	}
	else {
		printf("ƒGƒ‰[\n");
	}
}