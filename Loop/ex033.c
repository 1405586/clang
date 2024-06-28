#include<stdio.h>
main()
{
	int n, g,p;
	printf("”‚ÍH");
	scanf("%d", &n);
	for (g = 0,p=0; n != -999; g += n,p++) {
		printf("”‚ÍH");
		scanf("%d", &n);
	}
	p--,g=g+999;
	printf("‡Œv%d\t•½‹Ï%.2f", g,(float) g / p);
}