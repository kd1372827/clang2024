#include<stdio.h>
main()
{
	int flg, su1, su2;
	printf("‰‰Zq‚ğ“ü—Í:"); //1=+,2=-,3=*,4=/
	scanf("%d", &flg);
	printf("‚Q‚Â®”‚ğ“ü—Í:");
	scanf("%d%d", &su1, &su2);

	if (flg==1) {
		printf("%d", su1 + su2);
	}
	else{
		if (flg==2) {
			printf("%d", su1 - su2);
		}
		else{
			if (flg==3) {
				printf("%d", su1 * su2);
			}
			else{
				if (flg==4) {
					printf("%d", su1 / su2);
				}
			}
		}
	}
}