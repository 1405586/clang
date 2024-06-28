#include<stdio.h>
int add(int a2, int b2);
main()
{
	int a, b, kotae;
	printf("®”‚ğ2‚Â“ü—ÍF");
	scanf("%d%d", &a, &b);
	kotae = add(a, b);
	printf("‡Œv‚Í%d‚Å‚·\n", kotae);
	//printf("‡Œv‚Í%d‚Å‚·\n",add(a,b);
}

int add(int a2, int b2)
{
	int ans;
	ans = a2 + b2;
	return ans;
}