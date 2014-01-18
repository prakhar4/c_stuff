#include<stdio.h>

#define MAXM 100

//extern int top;
extern float stk[];



void push(float info)
{	

	
	if(top>=MAXM)	
		printf("\nStk overflow insertion not possible\n");
	else
		stk[++top]=info;		
}

	int top=10;

float pop(void)
{
	if(top<0)
		printf("\nstack underflow\n");
	//else if(top==0)
		
	else
		return stk[top--];
}























