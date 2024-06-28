#include<stdio.h>
main()
{
	int a,i=0, gokei=0;

	while (1) {
		printf("®”(-999‚ÅI—¹)?");
		scanf("%d", &a);
		
		if (a == -999) {
			break;
		}
		if (a<0) {
			continue;
		}
			gokei += a;
			i++;
	}
	
	printf("‡Œv=%d\n•½‹Ï=%.3f", gokei, (float)gokei / i);
}