#include<stdio.h>

float ret(float a)
{
	printf("\n %f %f \n",a,a/2);
	return a/2;
}

main()
{
	float a=10, b=0;
	
	//b=ret(23);
	printf("\nthe returned value is %f\n",a);
}
