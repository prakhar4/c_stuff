/*
	to implement the Unix equivalent of cat command
*/

#include <stdio.h>

int fileCopy(FILE *in, FILE *out)
{
	if(in==NULL || out==NULL)
		return -1;
		
	int c;
	while((c=getc(in))!=EOF)
		putc(c,out);
	
	return 0;
}

int showFileName(char *name)
{
	if(name==NULL)
		return;
	printf("\n=======================================================\n");
	for(;*name;name++)
		putchar(*name);
	printf("\n=======================================================\n");
}

int main(int argc, char **argv)
{
	if(argc==1)
		return -1;

	FILE *fp;
/*	argv++;*/
	
	while(*++argv)
	{
		if((fp=fopen(*argv,"r"))==NULL)
			return -1;
		else
		{
			showFileName(*argv);		
			fileCopy(fp,stdout);
		}
		fclose(fp);	
	}	
	printf("\n");
}
