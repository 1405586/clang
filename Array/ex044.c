#include<stdio.h>
main()
{
	int i;
	char moji1[50], moji2[50], w[50];
	printf("文字列1を入力：\n");
	scanf("%s", & moji1);
	printf("文字列2を入力：\n");
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
	printf("入れ替えると\n");
	printf("moji1=%s\tmoji2=%s", moji1, moji2);
}