#include<stdio.h>
main()
{
	int a[] = { 100,200,300,400,500,600,700,800,900,1000 };
	int b[] = { 10,20,30,40,50,60,70,80,90,100 };
	int i, gokei;

	printf("�z��a=");
	for (i = 0, gokei = 0; i < 10; i++) {
		printf("%d ", a[i]);
		gokei += a[i];
	}
	printf("\n���v=%d\t����=%d\n", gokei, gokei / 10);

	printf("�z��b=");
	for (i = 0, gokei = 0; i < 10; i++) {
		printf("%d ", b[i]);
		gokei += b[i];
	}
	printf("\n���v=%d\t����=%d", gokei, gokei / 10);
}