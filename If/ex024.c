#include<stdio.h>
main()
{
	char mo;
	printf("���������:");
	scanf("%c", &mo);
	if (0x41 > mo) {
		printf("���̑��̕����ł�");
	}
	else {
		if (0x5A < mo) {
			printf("���̑��̕����ł�");
		}
		else {
			printf("�啶���ł�");
		}
	}
}