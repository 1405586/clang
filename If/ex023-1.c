#include<stdio.h>
main()
{
	int s, m, h, n;
	printf("�b�������:");
	scanf("%d", &s);
	if (s < 0) {
		printf("�}�C�i�X�̓G���[�ł�");
	}
	else {
		if (s <= 5000) {
			h = s / 3600, s = s % 3600;
			m = s / 60, s = s % 60;
			printf("%d����%d���b%d", h, m, s);
		}
		else {
			printf("�G���[");
		}
	}
}