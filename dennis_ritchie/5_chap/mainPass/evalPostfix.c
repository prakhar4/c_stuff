/*
	to pass a postfix expression to main
	and evaluate it directly
	
	IMP - 
		we cant pass the * symbol to indicate
		multiplication so we pass x
		
	* gives the list of all the files in the 
		current directory and passes to main
	
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int stk[100];
int top;

int pop()
{
/*	printf("\nEnter Pop ");*/
	//if(top)
		return (stk[--top]);
	//return -1;
}

void push(int info)
{
/*	printf("\nEnter push %d",info);*/
	stk[top++]=info;
/*	printf("\nIn Fun Top %d ",top);*/
	return;
}

void getOp(int *res)
{
	int i=2;
	while(i--)
	{
		if(!top)
		{
			printf("Invalid Input\n");
			exit(0);
		}
		res[i]=pop();
	}	
	return;
}


int main(int argc, char** argv)
{
	int i,j,tem, flag=0, res[2];
	char c, stem[20];
	++argv;
	
	while(*argv != NULL)
	{
		flag=0;
		c=*argv[0];
		switch(c)
		{
			case '+':
				getOp(res);
/*				printf("\nAdd ");*/
				push(res[0]+res[1]);
				break;
			case '-':
/*				printf("\nSub ");*/
				getOp(res);
				push(res[0]-res[1]);
				break;
			case 'x':
/*				printf("\nMul ");*/
				getOp(res);
				push(res[0]*res[1]);
				break;
			case '/':
/*				printf("\nDivide ");*/
				getOp(res);
				push(res[0]/res[1]);
				break;
			default:
/*				printf("\nDefault ");*/
				flag=1;
				break;
		}
		if(flag)
			push(atoi(*argv));
		
/*		printf("\nTop is %d ",top);*/
		
/*		printf("\nEle\n");*/
/*		for(i=0;i<top;i++)*/
/*			printf("  %d  ",stk[i]);*/
		
			
		++argv;
	}
	if(!flag)
	printf("%d\n",pop());
}
