#include<stdio.h>
main()
{
	int a;
	printf("‚O‚©‚ç‚P‚O‚O‚Ü‚Å‚Ì®”H");
	scanf("%d", &a);

	if (a >= 90) {
		printf("5");
	}
	else {
		if (a >= 80) {
			printf("4");
		}
		else {
			if (a  >= 50) {
				printf("3");
			}
			else {
				if (a >= 30) {
					printf("2");
				}
				else {
					printf("1");
				}
			}
		}
	}
}