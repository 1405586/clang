#include<stdio.h>
main()
{
	int a,i=0, gokei=0;

	while (1) {
		printf("����(-999�ŏI��)?");
		scanf("%d", &a);
		gokei += a;
		i++;
		if (a == -999) {
			break;
		}
	}
	gokei += 999;
		i--;
	printf("���v=%d\n����=%.3f", gokei, (float)gokei / i);
}