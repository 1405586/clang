/*#include<stdio.h>
main()
{
	int n, g,p;
	printf("数は？");
	scanf("%d", &n);
	for (g = 0,p=0; n != -999; g += n,p++) {
		printf("数は？");
		scanf("%d", &n);
	}
	p--,g=g+999;
	printf("合計＝%d\t平均＝%.2f", g,(float) g / p);
}*/
#include<stdio.h>
main()
{
	int n, g=0, p=0;
	do {
		printf("数は？");
		scanf("%d", & n);
		g += n;
		p++;
	} while (n != -999);
		p--;
		g = g + 999;
		printf("合計%d\t平均%.2f", g, (float)g / p);
}