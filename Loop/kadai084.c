#include<stdio.h>
main()
{
	int a, b;
	while (1) {
		printf("®”‚P(-999‚ÅI—¹)");
		scanf("%d", &a);
		printf("®”‚Q(-999‚ÅI—¹)");
		scanf("%d", &b);

		if (a == -999 || b == -999) {
			break;
		}

		if (b == 0) {
			continue;
		}
		if (a % b != 0) {
			printf("%d/%d=%d‚ ‚Ü‚è%d\n", a, b, a / b, a % b);
		}
		else {
			printf("%d/%d=%d\n", a, b, a / b);
		}
	}
}