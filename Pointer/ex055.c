/*#include<stdio.h>
main()
{
	int a[] = { 11,22,33,44,55,66 },g=0;
	int* p_a;
	float b[] = { 11.1,22.2,33.3,44.4 };
	float* p_b;

	for (p_a = a,g=0; p_a < 7; p_a++) {
		g += *p_a;
	}
	printf("配列a\t合計=%d\t平均=%.3f\n", g, g(float) / 6);

	for (p_b = b,g=0; p_b < 5; p_b++) {
		g += *p_b;
	}
	printf("配列b\t合計=%.3f\t平均=%.3f\n", g, g / 4);
}*/

#include <stdio.h>
#define B_SIZE 4 //配列bのサイズ
main()
{
	int a[] = { 11, 22, 33, 44, 55, 66 };
	float b[] = { 11.1, 22.2, 33.3, 44.4 };
	int* p_a, a_sum, i;
	float* p_b, b_sum;
	// sizeofの練習
	for (a_sum = 0, p_a = a, i = 0; i < sizeof a / sizeof(int); i++, p_a++) {
		a_sum += *p_a;
	}
	printf("配列a 合計 = %7d \t 平均 = %6.3f\n", a_sum, (float)a_sum / (sizeof a / sizeof(int))
	);
	// #defineの練習
	for (b_sum = 0, p_b = b, i = 0; i < B_SIZE; i++, p_b++) {
		b_sum += *p_b;
	}
	printf("配列b 合計 = %7.3f \t 平均 = %6.3f\n", b_sum, b_sum / B_SIZE);
}