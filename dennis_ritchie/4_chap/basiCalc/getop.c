/*
  this part of the program gives next input operand or 
  operator
  ungetc is required as we may have read more than needed
  characters, so we put it back to buffer
*/

#include"calc.h"
#include<stdio.h>
#include<ctype.h>

int getOp(char a[])
{
	char c;
	int i=0;
	
	c=getcc();
	if(c=='\n')
		return c;
	else
	{
		if(isdigit(c) || c=='.')
		{
			a[i++]=c;
			while(isdigit(c=getcc()))
			{
				//if(isdigit(c))
					a[i++]=c;
			}
			if(c==' ')	
			{
				a[i]='\0';
				return NUMB;
			}	
			
			if(c=='.')
			{
				a[i++]=c;
				while(isdigit(c=getcc()))
				{
					//if(isdigit(c))
						a[i++]=c;
				}
				a[i]='\0';
			}
		a[i]='\0';
		ungetcc(c);
		return NUMB;
		}
		else
		{
			a[i]=c;
			return c;
		}
	}
}

