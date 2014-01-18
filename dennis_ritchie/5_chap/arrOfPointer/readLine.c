#include<stdio.h>

#define MAXSTR 50   //no of lines

int getLine(char lines[], int lim)
{
	int i=0, c;
	
	while((--lim>0) && (c=getchar())!='\n' && c!=EOF)
		lines[i++]=c;
	
	if(c=='\n')
		lines[i++]='\n';
		
	lines[i]='\0';
	
	return i;
}






readLine(char **arr, int lim)
{
	char line[40];
	while()



}


void main()
{
	char *linePtr[MAXSTR];
	readline(linePtr,MAXSTR);
	
	
	
}
