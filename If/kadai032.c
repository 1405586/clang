#include<stdio.h>
main()
{
	int n;
	printf("整数を入力してください");
	scanf("%d", &n);
	if (0 == n % 2) {
		printf("この数字は「偶数」です");
	}
	else {
		printf("この数字は「奇数」です");
	}
}