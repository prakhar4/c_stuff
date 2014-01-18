/*
	to see if NULL value gives true or false if-else
*/

#include <stdio.h>

int main()
{
	int i;
	int *ptr=NULL;
	long int ll=(long)NULL;
	int j=(int)ll;
	
	ptr=&i;
	if(!ptr)
		printf("\nWorking");
	
	i=10;
	ptr=&i;
	
	if(ptr)
		printf("\nNot working");

	printf("\n %d \n",i);
	printf("\n NULL val %d \n",j);

}









