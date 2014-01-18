/* try to convert a itoa function  n write it more recursively */

#include<stdio.h>

static int cc=0;

recItoa(char str[], int n)
{
	if(n/10)
		recItoa(str,n/10);
		
	str[cc++]=(n%10)+'0';
}

main()
{
	char s[100];
	int num;
	
	printf("\nEnter the number ");
	scanf("%d",&num);
	
	recItoa(s,num);
	s[cc]='\0';
	
	printf("\nThe string is %s \n",s);
}





















