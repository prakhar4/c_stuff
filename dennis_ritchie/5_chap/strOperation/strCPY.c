/*
	to implement strCpy pointer wise
*/

#include<stdio.h>

char* strCpy(char *a, char *b)
{
	while(*b++ = *a++)
	;
	return b;	
}
/*
	works as the = operator returns the value
	assigned to the left value
	-- and on encoutering the \0 char, after
	copying that, it return \0, which is int 0
	equivalent , --thus aborting the loop
*/


void main()
{
	char s[40],t[40];
	printf("\nEnter the source str ");
	scanf("%[^\n]s",s);
	printf("\n1. %s \n2. %s ",s,t);		
	strCpy(s,t);
	
	printf("\nThe destn str %s   ",t);
	printf("\n1. %s \n2. %s ",s,t);


	printf("\n");
}



















