#include<stdio.h>
int add(int a2, int b2);
main()
{
	int a, b, kotae;
	printf("整数を2つ入力：");
	scanf("%d%d", &a, &b);
	kotae = add(a, b);
	printf("合計は%dです\n", kotae);
	//printf("合計は%dです\n",add(a,b);
}

int add(int a2, int b2)
{
	int ans;
	ans = a2 + b2;
	return ans;
}