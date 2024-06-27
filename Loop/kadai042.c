#include<stdio.h>
main() {
	int i, g;
	i = 0, g = 0;
	while (g <= 300) {
		i++;
		printf("%d+", i);
		g = g + i;
	}
	printf("\b=%d\n", g);
}