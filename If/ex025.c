#include<stdio.h>
main()
{
	char a;
	printf("文字を入力");
	scanf("%c", &a);
	if ('A' <= a && 'Z' >= a || 'a' <= a && 'z' >= a) {
		printf("アルファベットです");
	}
	else {
		if ('1' <= a && '9' >= a) {
			printf("数字です");
		}
		else {
			printf("その他の文字です");
		}
	}
}