#include<stdio.h>
main()
{
	char a;
	printf("1•¶Žš“ü—ÍH");
	scanf("%c", &a);

	if (a >= 'A' && a <= 'Z') {
		printf("%c", a + 32);
	}
	else {
		if (a >= 'a' && a <= 'z') {
			printf("•ÏŠ·Œ‹‰Ê‚Í%c", a - 32);
		}
			else {
				printf("•ÏŠ·Œ‹‰Ê‚Í%c", a);
			}
		}
	}
