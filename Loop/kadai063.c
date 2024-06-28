#include<stdio.h>
main()
{
	int a=1;
	while (a < 21) {
		printf("%2d ", a);
		if (a % 10==0) {
			printf("\n");
		}
		a++;

	}
}