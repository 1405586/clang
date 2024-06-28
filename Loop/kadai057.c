#include<stdio.h>
main()
{
	char a;
	int i;

	printf("アルファベットの大文字？");
	scanf("%c", &a);

	for (i = 0; a + i <= 'Z'; i++) {
		printf("%c ", a + i);
	}
}