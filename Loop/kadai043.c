#include<stdio.h>
main()
{
	int a;
	char moji = 0;
	while (a != -1) {
		printf("文字コード（-1で入力終了）？");
		scanf("%d", &a);
		printf("%c\n", moji + a);
	}
}