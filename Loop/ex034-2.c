#include<stdio.h>
main()
{
	int n,a;
	printf("���́H");
	scanf("%d", &n);
	do {
		for (a = 0; a < 5; a++) {
			printf("*");
		}
		printf("\n");
		n--;
	} while (n != 0);
}