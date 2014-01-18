/* this is just to check gdb functionality */

#include <stdio.h>

int func(int a)
{
	return a+10;
}

void main()
{
	int i,j,k;
	printf("\nEnter number ");
	scanf("%d",&i);

	for(k=1;k<5;k++)
	{
		if(k%2)
			i=func(i);
		i+=i;
	}
	printf("\nFinal value is %d ",i);
}
