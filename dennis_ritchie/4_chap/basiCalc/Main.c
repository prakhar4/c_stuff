/*
  to evaluate a postfix expression
  and make a rudimentary calculator
*/

#include<stdio.h>
#include<stdlib.h>
#include"calc.h"

main()
{
	char a[100];	
	int c;
	double tem=0.0;
	

	
	while((c=getOp(a))!='\n')
	{
		switch(c)
		{
			case NUMB:
				push(ext_atof(a));
				break;
			case '+':
				push(pop()+pop());
				break;
			case '*':
				push(pop()*pop());
				break;
			case '-':
				tem=pop();
				push(pop()-tem);
				break;
			case '/':
				tem=pop();
				if(tem==0)
				{
					printf("\nDivide by zero error");
					break;
				}
				push(pop()/tem);
				break;
			case ' ':
				break;
			default:
				printf("\nNot recognised variable");
				break;
			
		}	
	}
	printf("\n %f",pop());
	
	
}






















