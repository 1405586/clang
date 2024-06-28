#include<stdio.h>
main()
{
	int a=1,gokei=1;

	printf("%d", a);
	do {
		a++;
		printf("+%d", a);
		gokei += a;

	} while (gokei <= 300);
	printf("=%d", gokei);
}