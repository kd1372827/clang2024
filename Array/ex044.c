#include<stdio.h>
main()
{
	char s1[10], s2[10], w[10];
	int i;
	printf("•¶Žš—ñ‚P‚ð“ü—Í:");
	scanf("%s", s1); //&s1[10]
	printf("•¶Žš—ñ‚Q‚ð“ü—Í:");
	scanf("%s", s2);
	printf("\nmoji1=%s moji2=%s\n", s1, s2);
	{
		i = 0;
		while (s1[i] != '\0') {
			w[i] = s1[i];
			i++;
		}
		w[i] = '\0';
		i = 0;
		while (s2[i] != '\0') {
			s1[i] = s2[i];
			i++;
		}
		s1[i] = '\0';
		i = 0;
		while (w[i] != '\0') {
			s2[i] = w[i];
			i++;
		}
		s2[i] = '\0';
		printf("“ü‚ê‘Ö‚¦‚é‚Æ\nmoji1=%s moji2=%s", s1, s2);
	}
}