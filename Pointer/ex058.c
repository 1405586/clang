#include<stdio.h>
main()
{
	int a[3]={10,20,30}, * p;
	p = a;
	printf("%d\n",*p );
	printf("%d\n",*p+1 );
	printf("%d\n",*(p+1) ); 
	printf("%d\n",*p+=1 );
	printf("%d\n",*p++ );
	printf("%d\n",(*p)++);
	printf("%d\n",*++p );
	printf("%d\n",++*p );
}