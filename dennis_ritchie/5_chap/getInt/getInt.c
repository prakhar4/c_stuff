/*
	to get the integer from an input array and passing it to the calling 
	function by reference 
	also returning the status- so as to read more or send EOF 
	USE- we r reading value and returning status
		so the reqd value may contain the integer equivalent of EOF
		so to avoid that case we pass both separately
	RETURN- 0 if next inout is not a number 
			n if next is a number

*/

#include<ctype.h>
#include<stdio.h>

int getInt(int *pl)
{
	int c;
	while(isspace(c=getcc()) && c!=EOF && !isdigit(c));
	
/*	if(!isdigit(c) && c!='+' && c!='-' && c!=EOF)*/
/*	{*/
/*		ungetcc(c);*/
/*		return 0;*/
/*	}*/

	int sign=1;
	
	if(c=='-')
		sign=-1;
	if(c=='+' || c=='-')
		c=getcc();
	if(isdigit(c))
	{	
		for(*pl=0;(isdigit(c)) && c!=EOF;c=getcc())
		{
			*pl=((*pl)*10) + c -'0';
		}
	}
//	ungetcc(c);
	
	if(c==EOF)
	{
		//ungetcc(c);
		return c;
	}	
	return c;

}
























