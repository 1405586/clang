#include<stdio.h>
main()
{
	int no1, no2, no3;
	printf("�������R����:");
	scanf("%d%d%d", &no1, &no2, &no3);
	printf("���v=%d\t����=%.2f", no1 + no2 + no3, (no1 + no2 + no3) / 3.0);
}