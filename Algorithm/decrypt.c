#include<stdio.h>
main()
{
	char s[100];
	int i;
	printf("暗号化文字列を入力してください");
	scanf("%s", &s);

	for (i = 0; s[i] != '\0'; i++) {
		s[i]-=1;
	}

	printf("複合済み文字列は%s",s);
}