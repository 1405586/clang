#include<stdio.h>
main()
{
	int no;
	printf("西暦を入力:");
	scanf("%d", &no);
	if (no <= 1988) {
		printf("昭和生まれです");
	}
	if(2019>no>1988){
		printf("平成生まれです");
	}
	if (2019<=no ) {
		printf("令和生まれです");
	}
}