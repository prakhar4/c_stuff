/*
	to chk if typedef for different things (pointers)
	works
	char *st,
	char* st
	difference between these and see how typedef works with this
	
*/

#include <stdio.h>

int main()
{

typedef char* Str;



	Str a,q;
	Str p;
	Str ptr;
	char b,c,r,ch;

/*	char *a, b, c;*/
/*	char* p, q ,r;*/
/*	char ch;*/
/*	char *ptr;*/

	
	ch='a';
	ptr=&ch;
	p=ptr;
	
	q=p;
	*p='l';
	printf("\nval for q is %c ",*q);
	printf("\nval for p is %c ",*p);

	




	printf("\n");
}































