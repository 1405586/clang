#include<stdio.h>
main()
{
	int c;
	char dumy[256];
	char data,data2;

	c = scanf("%c%c",&data,&data2);
	while (c != EOF) {
		printf("%d", c);
		putchar('\n');
		gets(dumy);
		c = scanf("%c%c", &data,&data2 );
	}

	printf("%d\n", printf("HELLO"));
	printf("%d\n", printf("こんにちは"));

}