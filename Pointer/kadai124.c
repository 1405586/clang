#include<stdio.h>
main()
{
	char c, * p_c;

	p_c = &c;
	printf("1�������́H");
	scanf("%c", p_c);

	printf("���̕�����%c", *p_c+1);
}