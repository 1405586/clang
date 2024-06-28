#include<stdio.h>
struct shohin_data {
	char name[20];
	int tanka;
};

void display1(int a);
void display2(struct shohin_data shohin);
void display3(struct shohin_data* p);

main() {
	int a = 10;
	struct shohin_data shohin = { "ƒPƒVƒSƒ€",50 };
	display1(a);
	display3(&shohin);
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

void display3(struct shohin_data* p)
{
	p->tanka = 100;
	printf("%s %d", p->name, p->tanka);
}