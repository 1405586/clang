#include<stdio.h>
main()
{
	char s[100];
	int i;
	printf("���������͂��Ă�������");
	scanf("%s", &s);

	for (i = 0; s[i] != '\0'; i++) {
		s[i]+=1;
	}

	printf("�Í����������%s",s);
}