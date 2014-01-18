/* to recursively reverse a string in place */

#include<stdio.h>

static int len=0;

swapc(char a[], int i, int j)
{
	char tem=a[i];
	a[i]=a[j];
	a[j]=tem;
}


rev(char a[], int i)
{
	if(a[++i]!='\0')
		rev(a,i);
	
	if(i>len)
		swapc(a,--i,len++);
}


main()
{
	char a[100];
	
	printf("\nEnter the string ");
	scanf("%[^\n]s",a);
	
	rev(a,-1);
	
	printf("\nthe new string is %s",a);
	
}

