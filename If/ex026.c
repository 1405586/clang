#include<stdio.h>
main()
{
	int mo;
	printf("ŒŽ‚ð“ü—Í");
	scanf("%d", &mo);
	if (1 <= mo && mo <= 12) {
		if (mo == 2) {
			printf("ÅI“ú‚Í28“ú‚Å‚·");
		}
		else {
			if (mo==4||mo==6||mo==9||mo==11) {
				printf("ÅI“ú‚Í30“ú‚Å‚·");
			}
			else {
				printf("ÅI“ú‚Í31“ú‚Å‚·");
			}
		}
	}
	else {
		printf("1`12‚Ì”Žš‚ð“ü‚ê‚Ä‚­‚¾‚³‚¢");
	}
}