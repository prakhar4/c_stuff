/*Exercise 3-5. Write the function itob(n,s,b) that converts the integer n into a base b
character representation in the string s. In particular, itob(n,s,16) formats s as a
hexadecimal integer in s.
-------------------------------------
this program wroks for all the bases with proper representation*/

#include<stdio.h>
#include<string.h>

void reverse(char a[])
{
	int i, l, j;
	l=strlen(a);
	j=l/2;
	for(i=0;i<j;i++)
		cSwap(a,i,l-1-i);
}

void modifyItob(char a[], int n, int b)
{
	int i, j, k;
	
	for(i=0;n>0;n/=b,i++)
		{
			if((n%b)>9)
				a[i]='A'-10+(n%b);
			else
				a[i]=(n%b)+'0';
		}
	a[i]='\0';
	reverse(a);
}


int main()
{
	int num, base;
	char a[100];
	
	printf("\nEnter number ");
	scanf("%d",&num);
	printf("\nEnter the base ");
	scanf("%d",&base);
	
	modifyItob(a,num,base);
	
	printf("\nThe converted string is -->  %s\n",a);
}


