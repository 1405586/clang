#include<stdio.h>
main()
{
	int a,i=0, gokei=0;
	do {
		printf("整数（-999で終了）");
		scanf("%d", &a);
		gokei += a;
		i++;
	} while (a != -999);

	gokei+=999;
	i--;
	printf("合計＝%d\n", gokei);
	printf("平均＝%f", (float)gokei / i);
}