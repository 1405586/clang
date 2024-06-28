#include<stdio.h>
main()
{
	int n,g=0;
	do {
		printf("”‚ğ“ü‚ê‚Ä:");
		scanf("%d", &n);
		if (n == -999)break;
		g += n;
	} while (1);
	printf("‡Œv%d", g);

/*#include<stdio.h>
main()
{
	int n, g = 0;
	while (1)
	{
		printf("”‚ğ“ü‚ê‚Ä:");
		scanf("%d", &n);
		if (n == -999)break;
		g += n;
	}
	printf("‡Œv%d", g);*/
}