#include<stdio.h>
#include<stdlib.h>
main(int argc,char* argv[])
{
	int a, b;
	if (argc != 3) {
		printf("ERROR");
	}
	else {
		a = atoi(argv[1]);
		b = atoi( argv[2]);
		printf("%d+%d=%d", a, b, a + b);
	}
}