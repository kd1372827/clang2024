#include<stdio.h>
main()
{
	char s1[10], s2[10], w[10];
	int i;
	printf("•¶Žš—ñ‚P‚ð“ü—Í:");
	scanf("%s", s1); //&s1[10]
	printf("•¶Žš—ñ‚Q‚ð“ü—Í:");
	scanf("%s", s2);

	printf("moji1=%s \t moji2=%s\n", s1, s2);
	printf("“ü‚ê‘Ö‚¦‚é‚Æ\n");
	for (i = 0; w[i] = s1[i]; i++);
	for (i = 0; s1[i] = s2[i]; i++);
	for (i = 0; s2[i] = w[i]; i++);
	printf("moji1=%s \t moji2=%s\n", s1, s2);
}