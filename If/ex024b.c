#include<stdio.h>
main()
{
	char mo;
	printf("���������:");
	scanf("%c", &mo);
	if (0x41<=mo&&mo<=0x5A) {
		printf("�啶���ł�");
	}
	else {
		printf("���̑��̕����ł�");
	}
}