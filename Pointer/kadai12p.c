#include<stdio.h>
main()
{
	char* day[] = { "Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday",NULL };
	char** d;
	d = &day[0];
	for (; d !=NULL;d++) {
		printf("%s\n",*d);
	}
}