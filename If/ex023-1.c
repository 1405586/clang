#include<stdio.h>
main()
{
	int s, m, h, n;
	printf("秒数を入力:");
	scanf("%d", &s);
	if (s < 0) {
		printf("マイナスはエラーです");
	}
	else {
		if (s <= 5000) {
			h = s / 3600, s = s % 3600;
			m = s / 60, s = s % 60;
			printf("%d時間%d分秒%d", h, m, s);
		}
		else {
			printf("エラー");
		}
	}
}