#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i, u, a, s, g = 0, gg = 0;
	

	srand(time(0));
	rand();
	for (i = 1; i < 3; i++) {
		a = rand() % 9 + 2;
		printf("���Ȃ���%d���ڂ̃J�[�h:%d\n", i, a);
		g += a;
	}
	printf("���Ȃ��̌��݂̍��v:%d",g);
	printf("\n\n");


	u = rand() % 9 + 2;
	gg += u;
	printf("�z�X�g��1���ڂ̃J�[�h:%d\n\n", u);


	printf("����ɃJ�[�h�������܂����H�i�P�F�J�[�h������ �Q�F��������)");
	scanf("%d",&s);
	for(i=3;s==1&&g<22;i++){
		if (s == 1) {
			a = rand() % 9 + 2;
			g += a;
			printf("���Ȃ���%d���ڂ̃J�[�h:%d\n", i, a);
			printf("���Ȃ��̌��݂̍��v:%d\n\n", g);
			if (g < 22) {
				printf("����ɃJ�[�h�������܂����H�i�P�F�J�[�h������ �Q�F��������)");
				scanf("%d", &s);
			}
		}
	}

	if (s == 2&&g<22) {
		u = rand() & 9 + 2;
		gg += u;
		printf("�z�X�g��2���ڂ̃J�[�h:%d\n\n", u);
		printf("�z�X�g�̍��v:%d\n", gg);
		printf("���Ȃ��̍��v:%d\n", g);

		if (g == gg) {
			printf("���������ł�");
		}

		if (g < gg) {
			printf("���Ȃ��̕����ł�");
		}

		if (g > gg) {
			printf("���Ȃ��̏����ł�");
		}
	}

	if (g > 21) {
		printf("���Ȃ��̍��v��21�𒴂��܂����B���Ȃ��̕����ł�");
	}
}
	
	/*
	for (i = 3, d = 0; g <= 21 && d == 0; i++) {
		printf("����ɃJ�[�h�������܂����H(�P�F�J�[�h������ �Q�F��������)");
		scanf("%d", &b);

		switch (b) {
		case 1:
			c = rand() % 9 + 2;
			printf("���Ȃ���%d���ڂ̃J�[�h:%d", i, c);
			g += c;
			printf("���Ȃ��̍��v��%d�ł�", g);
		case 2:
			printf("���Ȃ��̍��v��%d�ł�\n\n", g);
			uu = u;
			u = rand() % 9 + 2;
			uu += u;
			printf("�z�X�g�̓񖇖ڂ̃J�[�h��%d�ł�\n", u);
			printf("�z�X�g�̍��v��%d�ł�\n", uu);
			if(g-uu<0){
				printf("���Ȃ��̕����ł�");
			}
			if (g - uu < 0) {
				printf("���Ȃ��̏����ł�");
			}
			if (g - uu == 0) {
				printf("���������ł�");
			}
			d += 1;

		}
	}
*/
