#include<stdio.h>
main()
{
	int mo;
	printf("月を入力");
	scanf("%d", &mo);
	if (1 <= mo && mo <= 12) {
		if (mo == 2) {
			printf("最終日は28日です");
		}
		else {
			if (mo==4||mo==6||mo==9||mo==11) {
				printf("最終日は30日です");
			}
			else {
				printf("最終日は31日です");
			}
		}
	}
	else {
		printf("1〜12の数字を入れてください");
	}
}