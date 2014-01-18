/*
	to check if argv[argc]==NULL
	
	CONC-
		argv is array of char pointers
		argc is the number of arguments
		
	IMP CONC-
		we have argv[argc]==NULL

*/

#include<stdio.h>

main(int argc, char** argv)
{
	int i;
	for(i=0;i<argc;i++)
		printf("\n  %s   ",argv[i]);
	
	printf("\n");

	while(*argv!=NULL)
		printf("\n %s ",*(argv++));

	char* temp=NULL;
	printf("\n     %s  ",temp);
	


	printf("\n");
//both give same output
}













