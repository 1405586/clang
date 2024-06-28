#include<stdio.h>
void gokeiheikin(int a, int b, int *go, float *he);

main()
{
	int a, b, gokei;
	float heikin;
	printf("®”‚ğ2‚Â“ü—Í:");
	scanf("%d %d", &a, &b);
	gokeiheikin(a, b,&gokei,&heikin);
	printf("‡Œv‚ÍA%d•½‹Ï‚Í%.2f", gokei, heikin);
}

void gokeiheikin(int a, int b, int *go, float *he)
{
	*go = a + b;
	*he = (a + b) / 2.0;

}