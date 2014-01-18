/*
	use fopen fclose FILE
*/

#include <stdio.h>

int main(int argc, char **argv)
{
	FILE *fp;
	fp=fopen(argv[1],"read");
	int c;
		
	if(fp==NULL)
		return -1;
		
	while((c=getc(fp))!=EOF)
		putc(c,stdout);
	
	fclose(fp);
	
	printf("\n");
}




