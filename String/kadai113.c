#include<stdio.h>
main()
{
	char a[] = "GameSoft";
	int i;

	printf("������%s\n", a);

	for (i = 0; a[i] != '\0'; i++) {}

	printf("��������%d", i);
}