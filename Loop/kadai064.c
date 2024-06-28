#include<stdio.h>
main()
{
	int a=20;
	while (a >0) {
		printf("%2d ", a);
		if (a % 10==1) {
			printf("\n");
		}
		a--;

	}
}