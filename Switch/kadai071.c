#include<stdio.h>
main()
{
	int a, b;
	char c;
	printf("整数１？");
	scanf("%d",&a);
	printf("整数２？");
	scanf("%d",&b);
	printf("演算子？");
	scanf(" %c",&c);


	switch (c) {
	case '+':printf("%d+%d=%d", a, b, a + b);
		break;
	case '-':printf("%d-%d=%d", a, b, a - b);
		break;
	case '*':printf("%d*%d=%d", a, b, a * b);
		break;
	case '/':printf("%d/%d=%d", a, b, a / b);
		break;
	case '%':printf("%d%%d=%d", a, b, a % b);
		break;
	default:printf("演算子が正しくありません");
	}
}