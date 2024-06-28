#include<stdio.h>
main()
{
	char* p = "peach";
	char data1[10] = "banana", * p_data1;
	char data2[10], * p_data2;

	p_data1 = data1;//data1‚Ìæ“ª—v‘f‚ÌƒAƒhƒŒƒX‚ğŠi”[
	p_data2 = data2;//data2‚Ìæ“ª—v‘f‚ÌƒAƒhƒŒƒX‚ğŠi”[

	while (*p_data2++ = *p_data1++);
	p_data1 = data1;//data1‚Ìæ“ª—v‘f‚ÌƒAƒhƒŒƒX‚ğŠi”[
	while (*p_data1++ = *p++);

	printf("data1[]=%s\n", data1);
	printf("data2[]=%s", data2);
}