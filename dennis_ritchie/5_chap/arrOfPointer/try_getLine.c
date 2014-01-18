/*
  try to write the function for getline 
  using the input character buffer

	here you could just take in strings and accept them
	-BY TERMINAL
		just keep in typing values and it accepts untill limit
		or it will just take in untill ENTER
		-to terminate we depict the EOF by Ctrl+D
	
	-BY FILE INPUT
		you could just feed in the file with redirection
		operator < . the inp.txt is an example
		

*/

#include<stdio.h>
#define LIM 50

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

main()
{
	char a[1000];
	printf("\nEnter the string - ");
	int i=0, len;
	
	while((len=getLine(a,LIM))>0)
	{
		printf("\n%d string is - %s",++i,a);
		printf("\n  %d ",len);
	}
	
	printf("\nEnd reached\n");
}
