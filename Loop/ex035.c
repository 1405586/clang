#include<stdio.h>
main()
{
	int n,g=0;
	do {
		printf("数を入れて:");
		scanf("%d", &n);
		if (n == -999)break;
		g += n;
	} while (1);
	printf("合計%d", g);

/*#include<stdio.h>
main()
{
	int n, g = 0;
	while (1)
	{
		printf("数を入れて:");
		scanf("%d", &n);
		if (n == -999)break;
		g += n;
	}
	printf("合計%d", g);*/
}