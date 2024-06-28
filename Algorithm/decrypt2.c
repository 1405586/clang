#include<stdio.h>
main()
{
	int i,k[20];
	char s[20];
	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
	scanf("%s", &s);

	for (i = 0; s[i] != '\0'; i++) {
		printf("s[%d]‚Ì•¡‡‰»ƒL[", i);
		scanf("%d", &k[i]);
		printf("\n");
		s[i] -= k[i];
	}

	printf("\n•¡‡‰»Ï‚İ•¶š—ñ‚Í%s", s);
}