#include<stdio.h>
main()
{
	int d[10]={ 10,5,30,77,16,3,47,29,37,33 };
	int s, i;
	printf("�T���l�����:");
	scanf("%d", &s);
	for (i = 0; i < 10 && d[i] != s; i++) {}
	if (i == 10) {
			printf("������Ȃ�����");
		}
	else {
		printf("�z���%d�ԖڂɌ�������", i);
	}
}