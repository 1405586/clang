#include<stdio.h>
int gokei(int g1, int g2, int g3);
float heikin(float h1, float h2, float h3);
main()
{
	int a, b, c,g;
	float h;
	printf("®”‚ğ3‚Â“ü—Í:");
	scanf("%d%d%d", &a, &b, &c);

	g = gokei(a, b, c);
	h = heikin(a, b, c);

	printf("‡Œv‚Í%dA•½‹Ï‚Í%.2f", g, h);
}

int gokei(int g1, int g2, int g3)
{
	int ans;
	ans = g1 + g2 + g3;
	return ans;
}

float heikin(float h1, float h2, float h3)
{
	float ans;
	ans = (h1 + h2 + h3) / 3;
	return ans;
}

/*float heikin(int h1,int h2,int h3)
{
float ans;
ans=(h1+h2+h3)/3.0;
return ans;
*/