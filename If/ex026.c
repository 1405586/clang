#include<stdio.h>
main()
{
	int mo;
	printf("�������");
	scanf("%d", &mo);
	if (1 <= mo && mo <= 12) {
		if (mo == 2) {
			printf("�ŏI����28���ł�");
		}
		else {
			if (mo==4||mo==6||mo==9||mo==11) {
				printf("�ŏI����30���ł�");
			}
			else {
				printf("�ŏI����31���ł�");
			}
		}
	}
	else {
		printf("1�`12�̐��������Ă�������");
	}
}