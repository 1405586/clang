#include<stdio.h>
main()
{
	int n,g=0;
	do {
		printf("��������:");
		scanf("%d", &n);
		if (n == -999)break;
		g += n;
	} while (1);
	printf("���v%d", g);

/*#include<stdio.h>
main()
{
	int n, g = 0;
	while (1)
	{
		printf("��������:");
		scanf("%d", &n);
		if (n == -999)break;
		g += n;
	}
	printf("���v%d", g);*/
}