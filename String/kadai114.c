#include<stdio.h>
main()
{
	char a[50];
	int i;

	printf("������́H");
	scanf("%s", &a);

	printf("������:%s", a);

	for (i = 0; a[i] != '\0'; i++) {}
	printf("\t������=%d����", i);
}