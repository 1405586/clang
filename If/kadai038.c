#include<stdio.h>
main()
{
	char a;
	printf("1文字入力？");
	scanf("%c", &a);

	if (a >= 'A' && a <= 'Z') {
		printf("%c", a + 32);
	}
	else {
		if (a >= 'a' && a <= 'z') {
			printf("変換結果は%c", a - 32);
		}
			else {
				printf("変換結果は%c", a);
			}
		}
	}
