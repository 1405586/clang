#include<stdio.h>
main()
{
	char a[50];
	int i;

	printf("•¶š—ñ‚ÍH");
	scanf("%s", &a);

	printf("•¶š—ñ:%s", a);

	for (i = 0; a[i] != '\0'; i++) {}
	printf("\t•¶š”=%d•¶š", i);
}