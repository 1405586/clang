#include<stdio.h>
main()
{
	int n, x, a;
	printf("数を入れて:");
	scanf("%d",&n);
	for (x = 1; x <= 5; x++) {
		printf("%d ", n * x);
	}
}