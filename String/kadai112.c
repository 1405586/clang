#include<stdio.h>
main()
{
	char a[6] = "abcde";
	char b[6];
	int i;

	printf("(コピー元)配列a[]=%s", a);

	for (i = 0; a[i] != '\0'; i++) {
		b[i] = a[i];
	}
	b[i] = '\0';

	printf("(コピー先)配列b[]=%s", b);
}