#include<stdio.h>
main()
{
	int ia = 100, ib = 7;
	printf("* * * 100 と 7 の　四則計算 * * *\n");
	printf("%d+%d=%d\n", ia, ib, ia + ib);
	printf("%d-%d=%d\n", ia, ib, ia - ib);
	printf("%d*%d=%d\n", ia, ib, ia * ib);
	printf("%d/%d=%dあまり%d\n", ia, ib, ia / ib,ia%ib);
}