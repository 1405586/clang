#include<stdio.h>
main()
{
	double a, b;
	printf("2�̎����l");
	scanf("%lf %lf", &a, &b);

	printf("������%lf��%lf�̎l�����Z������\n",a,b);

	printf("�a��%lf ����%lf �ρ�%lf ����%lf", a + b, a - b, a * b, a / b);
}