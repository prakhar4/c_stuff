/*
	to include a file and see if it works
	for global variable
	which are static or not
*/

#include "stat.c"
#include<stdio.h>

/*extern int var;*/
int main()
{
	change();
	change();
	change();
	printf("\nvalue is %d  ",var);	
	
	
	
	
	printf("\n");
	return 0;
}















