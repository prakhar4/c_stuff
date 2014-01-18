/*
	return of scanf
	returns the number of arguments it takes 
	in the quotes " ", for accepting the values
*/
#include<stdio.h>

void main()
{
	int i,j,k;
	char a[40];
	
	printf("\nEnter ");
	k=scanf("%[^' ']s",a);
	printf("\n%d",k);
	printf("\n%s",a);
/*	i=printf("\n%d  %d %s ",i,j,a);
	printf("\nReturned value  %d ",i);
*/

	printf("\n");
}






