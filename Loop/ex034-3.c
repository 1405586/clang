#include<stdio.h>
main()
{
	int num, i, j;
	printf("”‚ÍH");
	scanf("%d", &num);
	i = 0;
	do {
		j = 0;
		do {
			printf("*");
			j++;
		} while (j < 1 + i);
		printf("\n");
		i++;
	} while (i < num);
}