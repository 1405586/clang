#include<stdio.h>
main()
{
	int a, gokei=0,i=0;
	while (a != -999) {
		printf("整数？（-999で終了)");
		scanf("%d",&a);
		gokei += a;
		i++;
	}
	gokei += 999;
	i--;
	printf("合計=%d\n平均=%d", gokei, gokei / i);
}