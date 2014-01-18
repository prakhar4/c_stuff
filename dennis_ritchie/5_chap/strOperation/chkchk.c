/*
	to check if null and \0 are actually zero
*/

#include<stdio.h>

void main()
{
	int a=0;
	char c=0;
/*	c=a;         same as above*/
	
	if(c=='\0')
		printf("\nYes same");
	else
		printf("\nNot same");
		
	printf("\n");
}


















