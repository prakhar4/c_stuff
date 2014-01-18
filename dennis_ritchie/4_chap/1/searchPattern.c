/*
Exercise 4-1. Write the function strindex(s,t) which returns the position of the rightmost
occurrence of t in s, or -1 if there is none.
*/


#include<stdio.h>
#include<string.h>

int searchPat(char a[], char b[])
{
	int len=strlen(a), i, j, k, len2=strlen(b);

	
	for(i=0;i<len;i++)
	{
		for(j=i, k=0; a[j]==b[k] && b[k]!='\0' && a[j]!='\0'; j++, k++);
		
		if(k>0 && b[k]=='\0')
			return (len-i-len2);
			
	}
	
}

void reverse(char a[])
{
	int l=strlen(a), i, j;
	j=l/2;
	for(i=0; i<j; i++)
		cSwap(a, i, l-1-i);
}

int searchRyt(char sou[], char pat[])
{
	int sLen=strlen(sou), ret, i,j;

	reverse(pat);
	reverse(sou);
	
	ret=searchPat(sou, pat);
	return (ret);
}







int main()
{
	char a[100],b[100];
	
	printf("\nEnter source string ");
	scanf("%[^\n]s",a);
	
	getchar();
	printf("\nEnter pattern string ");
	scanf("%[^\n]s",b);

	printf("\nthe index of rightmost occurance is %d\n",searchRyt(a,b));	
	return 0;
}





















































