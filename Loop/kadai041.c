#include<stdio.h>
main()
{
	int a, gokei=0,i=0;
	while (a != -999) {
		printf("�����H�i-999�ŏI��)");
		scanf("%d",&a);
		gokei += a;
		i++;
	}
	gokei += 999;
	i--;
	printf("���v=%d\n����=%d", gokei, gokei / i);
}