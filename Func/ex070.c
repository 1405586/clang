#include<stdio.h>
int add(int a2, int b2);
main()
{
	int a, b, kotae;
	printf("������2���́F");
	scanf("%d%d", &a, &b);
	kotae = add(a, b);
	printf("���v��%d�ł�\n", kotae);
	//printf("���v��%d�ł�\n",add(a,b);
}

int add(int a2, int b2)
{
	int ans;
	ans = a2 + b2;
	return ans;
}