/*#include<stdio.h>
main()
{
	int n, g,p;
	printf("���́H");
	scanf("%d", &n);
	for (g = 0,p=0; n != -999; g += n,p++) {
		printf("���́H");
		scanf("%d", &n);
	}
	p--,g=g+999;
	printf("���v��%d\t���ρ�%.2f", g,(float) g / p);
}*/
#include<stdio.h>
main()
{
	int n, g=0, p=0;
	do {
		printf("���́H");
		scanf("%d", & n);
		g += n;
		p++;
	} while (n != -999);
		p--;
		g = g + 999;
		printf("���v%d\t����%.2f", g, (float)g / p);
}