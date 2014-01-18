/*
	to see if initialisation is possible
*/
#include <stdio.h>
#define SUBS(a,b,c) c t;\
 t=a; a=b;\
  b=t;

int main()
{
	int i,j,k;
	
	i=50;
	j=11;
	
	SUBS(i,j,int);
	printf("\ni %d  \t j %d\n",i,j);

}










