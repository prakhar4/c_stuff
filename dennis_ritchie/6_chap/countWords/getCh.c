/*
	to maintain a suitable input/output
	so that we can getch and ungetch and 
	maintain a buffer
*/

#include<stdio.h>
//flag to denote if buff exist
static char buf=0;
static int flg=0;	

int getChar()
{
                                                 	if(flg)
	{
		flg=0;
		return buf;
	}
	else
		return(getchar());
}

void ungetChar(int c)
{
	if(flg)	
		printf("\nOVERLAPPING ");
	
	flg=1;
	buf=c;
	return;
}
