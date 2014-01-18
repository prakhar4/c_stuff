#include<stdio.h>
#define LIM 80

int getLine(char lines[], int lim)
{
	int i=0, c;
	
	while((--lim>0) && (c=getchar())!=EOF && c!='\n')
		lines[i++]=c;
	
	if(c=='\n')
		lines[i++]='\n';
		
	lines[i]='\0';
	
	return i;
}

