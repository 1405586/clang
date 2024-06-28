#include<stdio.h>
main()
{
	char a;
	printf("アルファベット？");
	scanf("%c", &a);

	if ('a' <= a) {
		printf("その文字は「小文字」です");
	}
	else {
		printf("その文字は「大文字」です");
	}
}