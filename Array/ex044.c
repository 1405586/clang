#include<stdio.h>
main()
{
	int i;
	char moji1[50], moji2[50], w[50];
	printf("•¶š—ñ1‚ğ“ü—ÍF\n");
	scanf("%s", & moji1);
	printf("•¶š—ñ2‚ğ“ü—ÍF\n");
	scanf("%s", & moji2);
	printf("moji1=%s\tmoji2=%s", moji1, moji2);
	for (i = 0; moji1[i] != '\0'; i++) {
		w[i] = moji1[i];
	}
	w[i] = '\0';
	moji1[i] -= moji1[i]+50;
	for (i = 0; moji2[i] != '\0'; i++) {
		moji1[i] = moji2[i];
	}
	moji2[i] = '\0';
	for (i = 0; w[i] != '\0'; i++) {
		moji2[i] = w[i];
	}
	printf("“ü‚ê‘Ö‚¦‚é‚Æ\n");
	printf("moji1=%s\tmoji2=%s", moji1, moji2);
}