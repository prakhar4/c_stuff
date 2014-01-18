/*
	this calculator need to have postfix expresion as input
	part of calculator which handles the stack operation
*/

#define MAXS 100
#include<stdio.h>

static int top;
static double stck[MAXS];

void push(double inf)
{
	if(top>=MAXS)
		printf("\nStack is overflowing ");
	else
		stck[top++]=inf;
}

double pop(void)
{
	if(top<=0)
		printf("\nStack is under flowing");
	else
		return (stck[--top]);
}
