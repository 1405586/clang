#include<stdio.h>
main()
{
	char a;
	printf("���������");
	scanf("%c", &a);
	if ('A' <= a && 'Z' >= a || 'a' <= a && 'z' >= a) {
		printf("�A���t�@�x�b�g�ł�");
	}
	else {
		if ('1' <= a && '9' >= a) {
			printf("�����ł�");
		}
		else {
			printf("���̑��̕����ł�");
		}
	}
}