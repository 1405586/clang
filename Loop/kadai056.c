#include<stdio.h>
main()
{
	char a;
	int i;

	printf("�A���t�@�x�b�g�̏������H");
	scanf("%c", &a);

	for (i = 0; a + i <= 'z'; i++) {
		printf("%c ", a + i);
	}
}