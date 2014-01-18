/*
	to wirte pointer version of strCat
	for concatenation
*/


#include<stdio.h>

//returns the pointer where der is NULL char
char* reachEnd(char *a)
{
	while(*a++)
	;
	return --a;
}

char* strCpy(char *a, char *b)
{
	while(*b++ = *a++)
	;
	return b;	
}

char* strCat(char *a, char *b)
{
	char *aEnd=reachEnd(a);
	strCpy(b,aEnd);
}


void main()
{
	char s[60],t[30];
	printf("\nEnter the first str ");
	scanf("%[^\n]s",s);
	getchar();
	printf("\nEnter the second str ");
	scanf("%[^\n]s",t);
	printf("\n1. %s \n2. %s ",s,t);

	strCat(s,t);
	
	printf("\nThe destn str %s   ",t);
	printf("\n1. %s \n2. %s ",s,t);


	printf("\n");
}

