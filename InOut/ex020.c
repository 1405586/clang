#include<stdio.h>
main()
{
	char n;
	printf("小文字を入力:");
	scanf("%c", &n);
	printf("大文字に変換して%c",n-32);
}