#include<stdio.h>
main()
{
	char mo;
	printf("文字を入力:");
	scanf("%c", &mo);
	if (0x41<=mo&&mo<=0x5A) {
		printf("大文字です");
	}
	else {
		printf("その他の文字です");
	}
}