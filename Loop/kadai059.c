#include<stdio.h>
main()
{
	int t, y;

	printf("   ");
	for (y = 1; y < 10; y++) {
		printf("%2d ", y);
	}
	printf("\n");
	printf("=============================\n");

	for (t = 1; t < 10; t++) {
		printf("%2d|", t);
		for (y = 1; y < 10; y++) {
			printf("%2d ", t * y);
		}
		printf("\n");
	}
}