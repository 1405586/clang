#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int p, c;
	printf("何を出しますか？\n(1:グー 2:チョキ 3:パー)");
	scanf("%d", &p);

	srand(time(0));
	rand();
	c = rand() % 3 + 1;

	switch (p) {
	case 1:printf("あなたはグーです\n");

		switch (c) {
		case 1:printf("私はグーです\n\nあいこです");
			break;
		case 2:printf("私はチョキです\n\nあなたの勝ちです");
			break;
		case 3:printf("私はパーです\n\nあなたの負けです");
			break;
		}
		break;

	case 2:printf("あなたはチョキです\n");
		switch (c) {
		case 1:printf("私はグーです\n\nあなたの負けです");
			break;
		case 2:printf("私はチョキです\n\nあいこです");
			break;
		case 3:printf("私はパーです\n\nあなたの勝ちです");
			break;
		}
		break;

	case 3:printf("あなたはパーです\n");
		switch (c) {
		case 1:printf("私はグーです\n\nあなたの勝ちです");
			break;
		case 2:printf("私はチョキです\n\nあなたの負けです");
			break;
		case 3:printf("私はパーです\n\nあいこです");
			break;
		}
		break;
	}
}
