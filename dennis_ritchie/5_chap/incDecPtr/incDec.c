#include<stdio.h>
#include<stdlib.h>
/*
	to check the allowable things in pointer
	such as inc dec variable
	but trying it with array names also
*/

strLen1(char *a)
{
	int n;
	
	for(n=0;*a!='\0';a++)
		n++;
		
	return n;

}

strLen2(char *a)
{
	char *p=a;
	while((*a)!='\0')
		a++;
	
	return (a-p);
}


char* getStr()
{
	char a,b, *s, *p;
	
	s=(char *)malloc(100);
	p=s;
	int i=0;
	while((a=getchar())!='\n')	
		(*(s++))=a;
		
	
	(*s)='\0';
	return p;
}


void main()
{
	char a[100], *ss;
	int len;
	
	//scanf("%[^\n]s",a);
	ss=getStr();		
	printf("\nEntered string is %s \n",ss);				

	len=strLen2(ss);	
	printf("\nLength2 is %d \n",len);	

	len=strLen1(ss);	
	printf("\nLength is %d \n",len);	


	len=strLen2("Hello World");	
	printf("\nLength2 is %d \n",len);
	
	
	

}




















