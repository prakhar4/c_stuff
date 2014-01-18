/*
	usage : tailng -n fsdhdegbadgb
	n is the number of last lines to show	
	
	to intake lines from terminal or a file <<
	and then show the last 'n' lines from it
*/	

#include <stdio.h>

#define MAXS 200

char *lines[MAXS];
int head=0, tnum=10;

int getLine(char *des)
{
	char c, *ptr=des;
	while((c=getchar())!='\n')
		*des++=c;
	*des='\n';

	if(*ptr=='\n')
		return 0;
	else if(c==EOF)
		return -1;
	else 
		return 1;
}


insert(char* s)
{
	
	lines[head]=(char*)malloc(MAXS);
	strcpy(lines[head],s);
	


	head++;
	head%=tnum;
}








main()
{
	char des[MAXS];
	int q,i,j,p;
	
	while(getLine(des)>=0)
	{
		insert(des);
	
	
	}
		
		












	printf("\n");

}


















