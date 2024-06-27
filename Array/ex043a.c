#include<stdio.h>
main() {
	char data[] = "orange";
	int i = 0;
	printf("•¶š—ñF");
	printf("%s\n", &data[0]);
	while (data[i] != '\0') {
		i++;
	}
	printf("•¶š”‚Í%d•¶š\n",i);
}