#include<stdio.h>
main()
{
	int a,i;
	char b[256];
	printf("�񐔂ƕ���������");
	scanf("%d %s",&a,&b);

	for (i = 0; i <= a; i++) {
		printf("%s ", b);
	}
}