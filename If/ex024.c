#include<stdio.h>
main()
{
	char mo;
	printf("•¶Žš‚ð“ü—Í:");
	scanf("%c", &mo);
	if (0x41 > mo) {
		printf("‚»‚Ì‘¼‚Ì•¶Žš‚Å‚·");
	}
	else {
		if (0x5A < mo) {
			printf("‚»‚Ì‘¼‚Ì•¶Žš‚Å‚·");
		}
		else {
			printf("‘å•¶Žš‚Å‚·");
		}
	}
}