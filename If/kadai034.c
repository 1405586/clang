#include<stdio.h>
main()
{
	char a;
	printf("�A���t�@�x�b�g�H");
	scanf("%c", &a);

	if ('A' <= a && a <= 'Z') {
		printf("���̕����́u�啶���v�ł�");
	}
	else {
		if ('a' <= a && a <= 'z') {
			printf("���̕����́u�������v�ł�");
		}
		else {
			printf("ERROR");
		}
	}
}