#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int p, c;
	printf("�����o���܂����H\n(1:�O�[ 2:�`���L 3:�p�[)");
	scanf("%d", &p);

	srand(time(0));
	rand();
	c = rand() % 3 + 1;

	switch (p) {
	case 1:printf("���Ȃ��̓O�[�ł�\n");

		switch (c) {
		case 1:printf("���̓O�[�ł�\n\n�������ł�");
			break;
		case 2:printf("���̓`���L�ł�\n\n���Ȃ��̏����ł�");
			break;
		case 3:printf("���̓p�[�ł�\n\n���Ȃ��̕����ł�");
			break;
		}
		break;

	case 2:printf("���Ȃ��̓`���L�ł�\n");
		switch (c) {
		case 1:printf("���̓O�[�ł�\n\n���Ȃ��̕����ł�");
			break;
		case 2:printf("���̓`���L�ł�\n\n�������ł�");
			break;
		case 3:printf("���̓p�[�ł�\n\n���Ȃ��̏����ł�");
			break;
		}
		break;

	case 3:printf("���Ȃ��̓p�[�ł�\n");
		switch (c) {
		case 1:printf("���̓O�[�ł�\n\n���Ȃ��̏����ł�");
			break;
		case 2:printf("���̓`���L�ł�\n\n���Ȃ��̕����ł�");
			break;
		case 3:printf("���̓p�[�ł�\n\n�������ł�");
			break;
		}
		break;
	}
}
