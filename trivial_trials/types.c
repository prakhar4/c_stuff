/*
	to see the value of size_t n all
*/

#include <stdio.h>
#include <sys/types.h>

int main()
{

	unsigned int l=1;
	size_t a;
	a=-1;

	l=a;
	int tt=(unsigned int)a;
	
	printf("\nValue is %d \n",a);
	printf("Neg is %d \n",l);
	printf("\nval is %d",tt);

	printf("\n");
}









