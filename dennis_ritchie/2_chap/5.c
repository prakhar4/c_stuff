/*Exercise 2-5. Write the function any(s1,s2), which returns the first location in a string s1
where any character from the string s2 occurs, or -1 if s1 contains no characters from s2.
(The standard library function strpbrk does the same job but returns a pointer to the
location.*/

#include<stdio.h>

int search(char a[], char sea)
{
	int i=0, j, k;
	
	while(a[i]!='\0')
	{
		if(a[i]==sea)
			return (i+1);
			
		i++;	
	}
	
	return -1;
	
	

}

void squeze(char a[], char s)
{
	int i=0, j=0;
	
	while(a[i]!='\0')
	{
		if(a[i]!=s)
			a[j++]=a[i];
		
		i++;
	}
	a[j]='\0';
}



int main()
{
	char a[100], dum, dd,b[100];
	int i=0,j,ret, min=99999;
	
	printf("\nEnter the searching string ");
	scanf("%[^\n]s",a);
	scanf("%c",&dum);
	printf("\nEnter the to be searched string ");
	scanf("%[^\n]s",b);
	
	while((dum=a[i])!='\0' )
	{
		squeze(a,dum);
		
		if(((ret=search(b,dum))!= -1) && (ret < min))
			{
				min=ret;
				dd=dum;
			}
	
	}
	if(min!=99999)
		printf("\n the position of \"%c\" first is %d",dd,min);
				return;
	
	printf("\n\nString not found");
	return;
}



























