#include<stdio.h>
main()
{
	char c, * p_c;

	p_c = &c;
	printf("1文字入力？");
	scanf("%c", p_c);

	printf("次の文字は%c", *p_c+1);
}