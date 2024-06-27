#include<stdio.h>
main()
{
	int i, s;
	int d[11] = { 10,5,30,77,16,3,47,29,37,33 };
	printf("’Tõ’l‚ğ“ü—ÍF");
	scanf("%d", &s);
	for (d[10] = s, i = 0; s != d[i]; i++) {
	}
	/*d[10] = s;
	i = 0;
	while (s != d[i]) {
		i++;
	}*/
	if (i == 10) {
		printf("%d‚ÍŒ©‚Â‚©‚ç‚È‚©‚Á‚½", s);
	}
	else {
		printf("’Tõ’l%d‚Íd[%d]‚ÅŒ©‚Â‚©‚Á‚½\n", s, i);
	}
}