#include<stdio.h>
main()
{
	int g, n;
	for (g = 0, n = 1; n <= 10; n++) {
		g += n;
		printf("�P����%d�܂ł̘a��%d\n", n, g);
	}
}