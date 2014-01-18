#include<stdio.h>

main()
{
	int a,b,c;
	a=5, b=10;
	
	printf("\n a is %d b is %d \n ",a,b);
	
	c=a, a=b, b=c;
	
	printf("\n a is %d b is %d \n ",a,b);
	
	printf("\nthe result of assignment is %d ",a=99,b=33);







}






