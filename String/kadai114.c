#include<stdio.h>
main()
{
	char a[50];
	int i;

	printf("文字列は？");
	scanf("%s", &a);

	printf("文字列:%s", a);

	for (i = 0; a[i] != '\0'; i++) {}
	printf("\t文字数=%d文字", i);
}