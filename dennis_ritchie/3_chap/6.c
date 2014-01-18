/*Exercise 3-6. Write a version of itoa that accepts three arguments instead of two. The third
argument is a minimum field width; the converted number must be padded with blanks on the
left if necessary to make it wide enough.*/

#include<stdio.h>
#include<string.h>

void reverse(char a[])
{
	int l=strlen(a), i, j;
	j=l/2;
	for(i=0; i<j; i++)
		cSwap(a, i, l-1-i);

}


void modifyItoa(char a[], int n, int w)	 //w is width expected of string 
{
	int i, j, l;
	
	for(i=0; n>0; n/=10, i++)
		a[i]=(n%10)+'0'; 
	a[i]='\0';

	l=strlen(a);
	
	if(w > l)
	{
		for(i=l; i<w; i++)
			a[i]='-';
		a[i]='\0';
	}
	reverse(a);
}

main()
{
	int num, w;
	char a[100];
	
	printf("\nEnter a number ");
	scanf("%d",&num);
	printf("\nEnter the width ");
	scanf("%d",&w);
	
	modifyItoa(a,num,w);
	
	printf("\nthe output is %s \n ",a);	

}

































