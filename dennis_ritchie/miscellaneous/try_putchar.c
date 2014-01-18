/*
	this is to show a input number as a string
	and to this recursively
	and use putchar
*/

#include<stdio.h>

prnt(int a)
{
	if(a/10)
		prnt(a/10);
	putchar((a%10)+'0');
}

main()
{
	int a;
	printf("\nEnter number ");
	scanf("%d",&a);
	
	if(a<0)
	{
		putchar('-');
		a*=-1;
	}
	prnt(a);
	putchar('\n');
}
