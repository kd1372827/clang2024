#include<stdio.h>
int main(void)
{
	FILE* fp;
	int a = 10, b = 20;
	fp = fopen("file01.txt", "a");
	fprintf(fp, "KOBEDENSHI\n");
	fprintf(fp, "%d+%d=%d\n", a, b, a + b);
	fclose(fp);
}