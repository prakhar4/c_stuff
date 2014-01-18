/*Exercise 2-4. Write an alternative version of squeeze(s1,s2) that deletes each character in
s1 that matches any character in the string s2.*/

#include<stdio.h>

void squeze(char a[], char ch)
{
	int i=0, j=0, k=0;
	
	for(; a[i]!='\0'; i++)
		if(a[i]!=ch)
			a[j++]=a[i];
	
	a[j]='\0';
}





void main()
{
	char a[100], dum, b[100];
	int i=0,j,k;
	
	printf("\nEnter the first string ");
	scanf("%[^\n]s",a);
	scanf("%c",&dum);
	printf("\nEnter the second string ");
	scanf("%[^\n]s",b);
	
	while((dum=b[i])!='\0')
	{
		squeze(b, dum);
		squeze(a, dum);
	}
	
	printf("\nThe first squeezed string %s  ",a);
}


