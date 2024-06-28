#include<stdio.h>
main()
{
	double a, b, * p_a=&a, * p_b=&b;

	printf("実数値１？");
	scanf("%lf", p_a);
	printf("実数値２？");
	scanf("%lf", p_b);

	if (*p_a > *p_b) {
		printf("大きい方＝%f", *p_a);
	}
	else {
		if (*p_b > *p_a) {
			printf("大きい方＝%f", *p_b);
		}
		else {
			printf("同じ値");
		}
	}


}