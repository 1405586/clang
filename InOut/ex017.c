#include<stdio.h>
main()
{
	float f1,f2,f3;
	printf("1つ目の実数:");
	scanf("%f", &f1);
	printf("2つ目の実数:");
	scanf("%f", &f2);
	printf("3つ目の実数:");
	scanf("%f", & f3);
	printf("合計=%.2f平均=%.2f", f1 + f2 + f3, (f1 + f2 + f3) / 3);
}