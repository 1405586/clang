#include<stdio.h>
void gokeiheikin(int a, int b, int *go, float *he);

main()
{
	int a, b, gokei;
	float heikin;
	printf("������2����:");
	scanf("%d %d", &a, &b);
	gokeiheikin(a, b,&gokei,&heikin);
	printf("���v�́A%d���ς�%.2f", gokei, heikin);
}

void gokeiheikin(int a, int b, int *go, float *he)
{
	*go = a + b;
	*he = (a + b) / 2.0;

}