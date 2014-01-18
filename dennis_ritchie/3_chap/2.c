/*Exercise 3-2. Write a function escape(s,t) that converts characters like newline and tab
into visible escape sequences like \n and \t as it copies the string t to s. Use a switch. Write
a function for the other direction as well, converting escape sequences into the real
characters.*/

#include<stdio.h>

void escape(char a[], char b[])
{
	int i, j=0, k;
	
	for(i=0; a[i]!='\0'; i++)
	{
		switch(a[i])
		{
			case '\n':
				b[j++]='\\';
				b[j++]='n';
				break;
			case '\t':
				b[j++]='\\';
				b[j++]='t';
				break;
			default:
				b[j++]=a[i];
				break;
		}
	}
	b[j]='\0';
}

void revEscape(char a[],char b[])    //a has literals written ,b is o/p
{
	int i, j=0;
	
	for(i=0; a[i]!='\0'; i++)
	{
		switch (a[i])
		{
			case '\\':
				if(a[i+1]=='n')
				{
					i++;
					b[j++]='\n';					
				}
				else if(a[i+1]=='t')
				{
					i++;
					b[j++]='\t';
				}
				else
					b[j++]=a[i];
				break;
			default:
				b[j++]=a[i];
		}
		b[j]='\0';
	}
}







int main()
{
	char a[100], b[100], c[100], dum;
	
	printf("\nEnter the string to terminate with + ");
	scanf("%[^+]s",a);
	//scanf("%c",&dum);
	escape(a,b);
	printf("\nThe two strings are \n1.%s \n2.%s \n",a,b);
	
	revEscape(b,c);
	printf("\nThe next two strings are \n3.%s \n4.%s \n",b,c);
	
	
	
	return 0;
}























