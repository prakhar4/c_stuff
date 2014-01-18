/*
	to see the meaning of const
*/

#include <stdio.h>

manipulate(const char *p)
{
	printf("\nchar is %c",*(p++));
	printf("\nNext char is %c",*p);

}

manip(const int pp)
{
	//printf("\nmodified int is %d",++pp);
	//printf("\nmodified int is %d",++pp);

}




int main()
{
	int a=10;
	const int b=12;
	char *ptrs="hello world";
	const char *ptr=ptrs;
	char *asd="zxcv";
	
	ptr=asd;
	(*ptr)++;	
	
	a++;
	printf("\na is %d",a);
//	b++;
	printf("\nb is %d",b);
	
	ptr++;
	printf("\nnext char is %c",*ptr++);
	
	manipulate(ptr);
	manip(b);
	
	printf("\n");

}

