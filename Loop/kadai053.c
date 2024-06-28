#include<stdio.h>
main()
{
	int a,i;
	printf("®”H");
	scanf("%d", &a);

	for (i = 0; i < 11; i++) {
		printf("%d ", a + i);
	}
}