#include<stdio.h>
main()
{
	int c[10];
	int i,j;

	for (i = 0; i < 10; i++) {
		printf("����(-999�ŏI��)?");
		scanf("%d", &c[i]);

		if (c[i] == -999) {
			printf("�z��c=");
			for (j = 0; j != i ; j++) {
			printf("%d ", c[j]);
			}
			break;
		}
	}
	if (c[i] != -999) {
		printf("�z��c=");
		for (i = 0; i < 10; i++) {
			printf("%d ", c[i]);
		}
	}

	
}