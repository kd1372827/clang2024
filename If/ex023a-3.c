#include<stdio.h>
main()
{
	int flg, su1, su2;
	printf("���Z�q�����:"); //1=+,2=-,3=*,4=/
	scanf("%d", &flg);
	printf("�Q���������:");
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