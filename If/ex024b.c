#include<stdio.h>
main()
{
	char mo;
	printf("•¶Žš‚ð“ü—Í:");
	scanf("%c", &mo);
	if (0x41<=mo&&mo<=0x5A) {
		printf("‘å•¶Žš‚Å‚·");
	}
	else {
		printf("‚»‚Ì‘¼‚Ì•¶Žš‚Å‚·");
	}
}