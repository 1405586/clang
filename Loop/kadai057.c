#include<stdio.h>
main()
{
	char a;
	int i;

	printf("�A���t�@�x�b�g�̑啶���H");
	scanf("%c", &a);

	for (i = 0; a + i <= 'Z'; i++) {
		printf("%c ", a + i);
	}
}