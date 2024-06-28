#include<stdio.h>
main()
{
	int i;
	char a;

	for (i = 1; i < 97; i++) {
		printf("%x %c ", i+31, i+31);
		if (i % 10 == 0) {
			printf("\n");
		}
	}
}