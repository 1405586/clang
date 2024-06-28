#include<stdio.h>
main()
{
	char* p_ride[3] = { "car","bus","shinkansen" };

	for (int i = 0; i < 3; i++) {
		while (*p_ride[i]) {
			putchar(*p_ride[i]++);
		}
		printf("\n");
	}
}
/*
#include<stdio.h>
main()
{
	char* p_ride[3] = { "car","bus","shinkansen" },*p;

	for (int i = 0; i < 3; i++) {
	p=p_ride[i]
		while (*p) {
			putchar(*p++);
		}
		printf("\n");
	}
}*/