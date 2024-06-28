#include<stdio.h>
main()
{
	float x[3][2];
	int i, g,gokei;
	for (g = 0; g < 3; g++) {
		for (gokei = 0, i = 0; i < 2; i++) {
			printf("x[%d][%d]=", g, i );
			scanf("%f", &x[g][i]);
			gokei += x[g][i];
		}
		printf("%ds–Ú‚Ì•½‹Ï=%.2f\n\n", g, (float)gokei / 2);
	}
}