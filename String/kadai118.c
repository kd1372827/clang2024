#include<stdio.h>
main()
{
	char day[7][10] = { "sunday","monday","tuesday","wednesday","thursday","friday","saturday" };
	for (int i = 0; i < 7; i++) {
		for (int j = 0; day[i][j] != '\0'; j++) {
			putchar(day[i][j]);
		}
		printf("\n");
	}
}