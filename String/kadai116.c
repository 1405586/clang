#include<stdio.h>
main()
{
	char a[30], b[30];
	int i,j;

	printf("•¶š—ñ‚PH");
	scanf("%[^\n]%*c",&a);
	printf("•¶š—ñ‚QH");
	scanf("%[^\n]%*c", &b);

	for (i = 0; a[i] != '\0'; i++) {}

	for (j = 0; b[j] != '\0'; j++) {
		a[i + j] = b[j];
	}
	a[i+j] = '\0';

	printf("%s", a);
}