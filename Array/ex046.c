/*#include<stdio.h>
main()
{
	int i,g, gokei;
	int a[][3] = { {10,20,30},{1,2,3} };
	for (g = 0; g <= 1; g++) {
		for (gokei = 0, i = 0; i <= 2; i++) {
			printf("a[0][%d]=%d\n", i, a[g][i]);
			gokei += a[g][i];
		}
		g++;
		printf("�O�s�ڂ̍��v=%d\n\n", gokei);
		for (gokei = 0, i = 0; i <= 2; i++) {
			printf("a[1][%d]=%d\n", i, a[g][i]);
			gokei += a[g][i];
		}
	}
	printf("1�s�ڂ̍��v=%d\n", gokei);
}*/
#include<stdio.h>
main()
{
	int i, g, gokei;
	int a[][3] = {
		{10,20,30},
		{1,2,3}
	};
	for (g = 0; g <= 1; g++) {
		for (gokei = 0, i = 0; i <= 2; i++) {
			printf("a[%d][%d]=%d\n", g, i, a[g][i]);
			gokei += a[g][i];
		}
		printf("%d�s�ڂ̍��v=%d\n", g, gokei);
	}
}