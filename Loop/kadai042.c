#include<stdio.h>
main()
{
	int i = 2,g = 1;
	printf("1");
	while (g <= 300) {
		g += i;
		printf("+%d", i);
		i++;
	}
	printf("=%d", g);
}