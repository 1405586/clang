#include<stdio.h>
main()
{
	char a;
	printf("1�������́H");
	scanf("%c", &a);

	if (a >= 'A' && a <= 'Z') {
		printf("%c", a + 32);
	}
	else {
		if (a >= 'a' && a <= 'z') {
			printf("�ϊ����ʂ�%c", a - 32);
		}
			else {
				printf("�ϊ����ʂ�%c", a);
			}
		}
	}
