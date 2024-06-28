#include<stdio.h>
main()
{
	char a='A';
	int i;

	for (i = 0; a + i <= 'Z'; i++) {
		printf("%c ", a+i);
	}
}