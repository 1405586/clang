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
	printf("�z��a\t���v=%d\t����=%.3f\n", g, g(float) / 6);

	for (p_b = b,g=0; p_b < 5; p_b++) {
		g += *p_b;
	}
	printf("�z��b\t���v=%.3f\t����=%.3f\n", g, g / 4);
}*/

#include <stdio.h>
#define B_SIZE 4 //�z��b�̃T�C�Y
main()
{
	int a[] = { 11, 22, 33, 44, 55, 66 };
	float b[] = { 11.1, 22.2, 33.3, 44.4 };
	int* p_a, a_sum, i;
	float* p_b, b_sum;
	// sizeof�̗��K
	for (a_sum = 0, p_a = a, i = 0; i < sizeof a / sizeof(int); i++, p_a++) {
		a_sum += *p_a;
	}
	printf("�z��a ���v = %7d \t ���� = %6.3f\n", a_sum, (float)a_sum / (sizeof a / sizeof(int))
	);
	// #define�̗��K
	for (b_sum = 0, p_b = b, i = 0; i < B_SIZE; i++, p_b++) {
		b_sum += *p_b;
	}
	printf("�z��b ���v = %7.3f \t ���� = %6.3f\n", b_sum, b_sum / B_SIZE);
}