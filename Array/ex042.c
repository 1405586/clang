#include<stdio.h>
main()
{
	int i;
	char data[6]="apple";
	//char data[]="apple"; これでも動く
	printf("1文字ずつ表示\n");
	for (i = 0; data[i] != '\0'; i++) {
		printf("%c\n",data[i]);
	}
	printf("\n");
	printf("文字列を表示\n");
	//printf("%s\n",&data[0]); //%sの時はアドレスを指定
	printf("%s\n", data+2); //配列名だけ書くと先頭アドレスを表す
}