#include<stdio.h>
main()
{
	char mo;
	printf("文字を入力:");
	scanf("%c", &mo);
	if (0x41 > mo) {
		printf("その他の文字です");
	}
	else {
		if (0x5A < mo) {
			printf("その他の文字です");
		}
		else {
			printf("大文字です");
		}
	}
}