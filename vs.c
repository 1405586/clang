#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int playerHP[2] = [100, 100];
	int playerCom[2] = {};

	srand(time(0));
	rand();

	while (1) {
		printf("�v���C���[1�̗̑�:%d\n\n", playerHP[0]);
		printf("�v���C���[1�̃^�[���I(1�F�ʏ�U�� �Q�F���U�� 3�F�h��");
		scanf("%d", &playerCom[0]);

		switch (playerCom[0]) {
		case 1:
			printf("�ʏ�U���I\n");
			playerHP[1] -= rand() % 30 + 1;//�G�ւ̃_���[�W
			break;
		case 2:
			printf("���U���I�I\n");
			playerHP[1] -= rand() % 21 + 40;//�G�ւ̃_���[�W
			playerHP[0] -= rand() % 20;//�����_���[�W
			break;
		case 3:
			printf("��\n");
			playerHP[0] += rand() % 20 + 1;//��
		}
	}
}