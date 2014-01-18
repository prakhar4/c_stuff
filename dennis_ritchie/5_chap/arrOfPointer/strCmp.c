/*
	to implement str compare in lexicograph 
	order, i.e in the dictionary order 
	and return zero , positive, or negative
*/


#include<stdio.h>
#include<string.h>

int strCmp(char* a, char *b)
{
	int i=0;
	while(*a++ == *b++)
	{
		if(*(a-1)==0)
			return 0;
		//printf("\n  %d for n is %d  ",i++,*a-*b);
	}		
	return (*--a)-(*--b);
}

/*
int strCmp1(char *a, char *b)	//alternate
{
	int i=0;
	char *tem=a;
	int n;
	while(!(n=((*a++) - (*b++))))
		printf("\n  %d for n is %d  ",i++,n);
	if((a-tem) >= strlen(tem))
		return 0;
	else
		return n;	
}

/*
void main()
{
	char s[40],t[40];
	int res;
	printf("\nEnter the first str ");
	scanf("%[^\n]s",s);
	getchar();
	printf("\nEnter the second str ");
	scanf("%[^\n]s",t);
	printf("\n1. %s \n2. %s ",s,t);		

	printf("\nThe result is %d ",strCmp1(s,t));

	res=strCmp(s,t);
	printf("\nThe result is %d ",res);

	printf("\n");
}
*/
