#include<stdio.h>
#include<stdlib.h>
#include<time.h>


	enum Bitstate
	{
		Base = 0,			//00000000　通常状態
		Poison = 1 << 0,	//00000001	毒状態
		Sleep=1<<1,			//00000010　眠り状態
		Paralysis=1<<2,		//00000100	麻痺状態
		Burn=1<<3,			//00001000	火傷状態
		AtkUp=1<<4,			//00010000	攻撃力アップ状態
		AtkDown=1<<5		//00100000	攻撃力ダウン状態
	};
	typedef unsigned int UINT;

	//自キャラ
	typedef struct {
		char name[20];
		int hp;
		int mp:
		int atk;
		int def;
		UINT MyState;
	} Chara;

	//敵キャラ
	typedef struct {
		char name[20];
		int hp;
		int atk;
		int def;
		UINT state;
	}Mob;

	void DisplayStatus(UINT s);
	void ChangeFlag(UINT* s);
	void ClearFlag(UINT* s);
	int DisplayMenu(void);

	main()
	{
		//				name	 hp	 mp atk def state
		Chara chara = { "主人公",100,50,10,10,Base };
		Mob mob[3] = { {"ゴブリン",100,30,5,5,Base},
					{"スライム",70,50,3,3,Base},
					{"ドラゴン",200,100,15,15,Base} };

		srand(time(0));

	}

int DisplayMenu(void)
	{
	char ch;
	printf("コマンド?\n");
	printf("1:戦う\n2:防御\n");
	ch = getch();
		return 0;
	}

	void DisplayStatus(UINT s)
	{
		printf("****現在の状態****\n");
		if (s & Poison) {
			printf("毒\n");
		}
		if (s & Sleep) {
			printf("眠り\n");
		}
		if (s & Paralysis) {
			printf("麻痺\n");
		}
		if (s & Burn) {
			printf("火傷\n");
		}
		if (s & AtkUp) {
			printf("攻撃力アップ\n");
		}
		if (s & AtkDown) {
			printf("攻撃力ダウン\n");
		}
		printf("*****************\n");
	}

	void ChangeFlag(UINT* s)
	{
		
		int a;
		while (1) {
			printf("どの状態にしますか？\n");
			printf("1:毒 2:睡眠 3:麻痺 4:火傷 5:攻撃↑ 6:攻撃力↓ 0:入力終了");
			scanf("%d", &a);
			if (a == 0) {
				break;
			}
			switch (a) {
			case 1:
				*s |= Poison;
				break;
			case 2:
				*s |= Sleep;
				break;
			case 3:
				*s |= Paralysis;
				break;
			case 4:
				*s |= Burn;
				break;
			case 5:
				*s |= AtkUp;
				break;
			case 6:
				*s |= AtkDown;
				break;
			default:
				break;
			}
		}
		
	}

	void ClearFlag(UINT* s)
	{
		int a;
		while (1) {
			printf("どの状態を回復しますか\n");
			printf("1:毒 2:睡眠 3:麻痺 4:火傷 5:攻撃↑ 6:攻撃力↓ 7:全状態解除  0:入力終了");
			scanf("%d", &a);
			if (a == 0) {
				break;
			}
			switch (a) {
			case 1:
				*s &= ~Poison;
				break;
			case 2:
				*s &= ~Sleep;
				break;
			case 3:
				*s &= ~Paralysis;
				break;
			case 4:
				*s &= ~Burn;
				break;
			case 5:
				*s &= ~AtkUp;
				break;
			case 6:
				*s &= ~AtkDown;
				break;
			case 7:
				//*s &= ~Poison;
				//*s &= ~Sleep;
				//*s &= ~Paralysis;
				//*s &= ~Burn;
				//*s &= ~AtkUp;
				//*s &= ~AtkDown;
				*s = Base;
				break;
			default:
				break;
			}
		}
	}

	
