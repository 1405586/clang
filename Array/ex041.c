#include<stdio.h>
main()
{
	int i;
	float box[3],g=0;
	for (i = 0; i <= 2; i++) {
		printf("���������:");
		scanf("%f",&box[i]);
		g += box[i];
	}
	printf("���v��%.2f�ł�\n", g);
	printf("���ς�%.2f�ł�", g / 3);

}