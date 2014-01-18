/*
Exercise 2-10. Rewrite the function lower, which converts upper case letters to lower case,
with a conditional expression instead of if-else.*/

#include<stdio.h>

void toLower(char a[])
{
	int i=0, j;
	
	while(a[i]!='\0')
	{
		a[i]=(a[i]>='a' && a[i]<='z') ? a[i]+'A'-'a' : a[i];
		i++;
	}
}

void main()
{
	char a[100];
	
	printf("\nEnter a string  ");
	scanf("%[^\n]s",a);
	
	toLower(a);
	
	printf("\nNow the string is %s\n",a );

}































