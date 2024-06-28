#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int playerHP[2] = [100, 100];
	int playerCom[2] = {};

	srand(time(0));
	rand();

	while (1) {
		printf("プレイヤー1の体力:%d\n\n", playerHP[0]);
		printf("プレイヤー1のターン！(1：通常攻撃 ２：強攻撃 3：防御");
		scanf("%d", &playerCom[0]);

		switch (playerCom[0]) {
		case 1:
			printf("通常攻撃！\n");
			playerHP[1] -= rand() % 30 + 1;//敵へのダメージ
			break;
		case 2:
			printf("強攻撃！！\n");
			playerHP[1] -= rand() % 21 + 40;//敵へのダメージ
			playerHP[0] -= rand() % 20;//自傷ダメージ
			break;
		case 3:
			printf("回復\n");
			playerHP[0] += rand() % 20 + 1;//回復
		}
	}
}