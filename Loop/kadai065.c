#include<stdio.h>
main()
{
	int a,i=0, gokei=0;
	do {
		printf("�����i-999�ŏI���j");
		scanf("%d", &a);
		gokei += a;
		i++;
	} while (a != -999);

	gokei+=999;
	i--;
	printf("���v��%d\n", gokei);
	printf("���ρ�%f", (float)gokei / i);
}