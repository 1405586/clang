#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i, u, a, s, g = 0, gg = 0;
	

	srand(time(0));
	rand();
	for (i = 1; i < 3; i++) {
		a = rand() % 9 + 2;
		printf("あなたの%d枚目のカード:%d\n", i, a);
		g += a;
	}
	printf("あなたの現在の合計:%d",g);
	printf("\n\n");


	u = rand() % 9 + 2;
	gg += u;
	printf("ホストの1枚目のカード:%d\n\n", u);


	printf("さらにカードを引きますか？（１：カードを引く ２：勝負する)");
	scanf("%d",&s);
	for(i=3;s==1&&g<22;i++){
		if (s == 1) {
			a = rand() % 9 + 2;
			g += a;
			printf("あなたの%d枚目のカード:%d\n", i, a);
			printf("あなたの現在の合計:%d\n\n", g);
			if (g < 22) {
				printf("さらにカードを引きますか？（１：カードを引く ２：勝負する)");
				scanf("%d", &s);
			}
		}
	}

	if (s == 2&&g<22) {
		u = rand() & 9 + 2;
		gg += u;
		printf("ホストの2枚目のカード:%d\n\n", u);
		printf("ホストの合計:%d\n", gg);
		printf("あなたの合計:%d\n", g);

		if (g == gg) {
			printf("引き分けです");
		}

		if (g < gg) {
			printf("あなたの負けです");
		}

		if (g > gg) {
			printf("あなたの勝ちです");
		}
	}

	if (g > 21) {
		printf("あなたの合計が21を超えました。あなたの負けです");
	}
}
	
	/*
	for (i = 3, d = 0; g <= 21 && d == 0; i++) {
		printf("さらにカードを引きますか？(１：カードを引く ２：勝負する)");
		scanf("%d", &b);

		switch (b) {
		case 1:
			c = rand() % 9 + 2;
			printf("あなたの%d枚目のカード:%d", i, c);
			g += c;
			printf("あなたの合計は%dです", g);
		case 2:
			printf("あなたの合計は%dです\n\n", g);
			uu = u;
			u = rand() % 9 + 2;
			uu += u;
			printf("ホストの二枚目のカードは%dです\n", u);
			printf("ホストの合計は%dです\n", uu);
			if(g-uu<0){
				printf("あなたの負けです");
			}
			if (g - uu < 0) {
				printf("あなたの勝ちです");
			}
			if (g - uu == 0) {
				printf("引き分けです");
			}
			d += 1;

		}
	}
*/
