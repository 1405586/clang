#include<stdio.h>
main()
{
	int data[] = { 10,5,23,29,2,6,3,1,70,100 };
	int i,w;

	printf("配列data=");
	for (i = 0; i < 10; i++) {
		printf("%d ", data[i]);
	}
	printf("\n");

	for (i = 1; i < 10; i++) {
		if (data[0] < data[i]) {
			w = data[0];
			data[0] = data[i];
			data[i] = w;
		}
	}

	for (i = 8; i >= 0; i--) {
		if (data[9] > data[i]) {
			w = data[9];
			data[9] = data[i];
			data[i] = w;
		}
	}

	printf("最大値=%d\t最小値=%d", data[0], data[9]);
}