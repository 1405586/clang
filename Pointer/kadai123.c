#include<stdio.h>
main()
{
	double a, b, * p_a=&a, * p_b=&b;

	printf("�����l�P�H");
	scanf("%lf", p_a);
	printf("�����l�Q�H");
	scanf("%lf", p_b);

	if (*p_a > *p_b) {
		printf("�傫������%f", *p_a);
	}
	else {
		if (*p_b > *p_a) {
			printf("�傫������%f", *p_b);
		}
		else {
			printf("�����l");
		}
	}


}