#include<stdio.h>
main()
{
	char a[30];
	int i;

	printf("������́H");
		scanf("%s", &a);

		for (i = 0; a[i] != '\0'; i++) {
			putchar(a[i]);
			printf("\n");
		}


}