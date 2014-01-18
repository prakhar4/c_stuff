/*	
	the reading is done from buffer 
	if there exists characters in buffer then - read it
	else take from input stream
	
	for pushing the extra read characters back in buffer
*/

#define SIZE 10
#include<stdio.h>

char buff[SIZE];
static int top=0;

int getcc()
{
	if(top<=0)
		return (getchar());
	else
		return (buff[--top]);
}

void ungetcc(char cc)
{
	if(top>=SIZE)
		printf("\nbuffer over flowing");
	else
		buff[top++]=cc;
}
