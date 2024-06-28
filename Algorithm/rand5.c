/*#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int a, i,j;
	for (i = 0; i < 10; i++) {
		for (j = 0; j<10; j++) {
		srand(time(0));
		rand();
		a = rand() % 300 + 1;
		printf("%d ", a);
	    }
		printf("\n");
	}
}*/

/*#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int a, i, j;
	srand(time(0));
	rand();
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			
			a = rand() % 300 + 1;
			printf("%4d ", a);
		}
		printf("\n");
	}
	*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int i;
	srand(time(0));
	for (i = 1; i <= 100; i++) {
		printf("%4d", rand() % 300 + 1);
		if (i % 10 == 0) { 
			printf("\n");
		}
	}
}
