#include<stdio.h>

void main(void)
{
	double res=0, ext_atof(char []);
	char a[100];
	
	printf("\nEnter the string- ");
	scanf("%[^\n]s",a);
	
	res=ext_atof(a);
	
	printf("\nThe result is- %f",res);
	
}



