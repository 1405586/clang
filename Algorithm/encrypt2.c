#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int k[100], i,n;
	char s[100];
	srand(time(0));
	rand();

	printf("���������͂��Ă�������");
	scanf("%s", &s);

	for (i = 0; s[i] != '\0'; i++) {
		k[i] = rand() % 6;
		s[i] += k[i];
	}

	printf("\n�Í����������%s\n", s);

	printf("�Í����L�[��");
	for (n = 0; n < i; n++) {
		printf("%d", k[n]);
	}

}