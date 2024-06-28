#include<stdio.h>
struct shohin_data {
	char name[20];
	int tanka;
};

void display1(int a);
void display2(struct shohin_data shohin);

main() {
	int a = 10;
	struct shohin_data shohin = { "ÉPÉVÉSÉÄ",50 };
	display1(a);
	display2(shohin);
}

void display1(int a)
{
	printf("a=%d\n", a);
}

void display2(struct shohin_data shohin)
{
	printf("shohin.name=%s shohin.tanka=%d\n", shohin.name,shohin.tanka);
}