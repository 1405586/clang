#include<stdio.h>
main()
{
	char c;
	printf("‰‰Zq‚ğ“ü‚ê‚Ä:");
	scanf("%c", &c);
	switch (c) {
	case '+':printf("‰ÁZ‚Å‚·");
		break;
	case '-':printf("Œ¸Z‚Å‚·");
		break;
	case '*':printf("æZ‚Å‚·");
		break;
	case '/':printf("œZ‚Å‚·");
		break;
	case '%':printf("è—]‚Å‚·");
		break;
	default:printf("‚»‚Ì‘¼‚Å‚·");
	}
}