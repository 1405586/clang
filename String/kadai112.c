#include<stdio.h>
main()
{
	char a[6] = "abcde";
	char b[6];
	int i;

	printf("(�R�s�[��)�z��a[]=%s", a);

	for (i = 0; a[i] != '\0'; i++) {
		b[i] = a[i];
	}
	b[i] = '\0';

	printf("(�R�s�[��)�z��b[]=%s", b);
}