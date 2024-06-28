#include<stdio.h>
void renketsu(char *ren1,char *ren2);
main()
{
	char a[256], b[256];

	printf("”z—ña:");
	scanf("%s", &a);
	printf("”z—ñb:");
	scanf("%s", &b);

	renketsu(a, b);

	printf("”z—ña:%s", a);
}

void renketsu(char *ren1, char *ren2)
{
	int i,j;
	for (i = 0; *(ren1+i) != '\0'; i++);
	for (j = 0; *(ren1 + i) = *(ren2 + j); i++, j++);
	/*for (j = 0; *(ren2 + j) != '\0'; j++) {
		*(ren1+i) = *(ren2+j);
		i++;
	}
	*/
}