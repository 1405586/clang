#include<stdio.h>
main()
{
	int no;
	printf("��������:");
	scanf("%d", &no);
	if (no <= 1988) {
		printf("���a���܂�ł�");
	}
	if(2019>no>1988){
		printf("�������܂�ł�");
	}
	if (2019<=no ) {
		printf("�ߘa���܂�ł�");
	}
}