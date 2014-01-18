/*
	to process those function in which 
	we donot know the - number of arguments
	so use different Standard library - stdarg.h
*/

#include <stdio.h>
#include <stdarg.h>

void chkFun(char *one,...)
{
	va_list ap;
	va_start(ap,one);
	
	int in=0;
	char ch=0;
	char *cp=NULL;
	double dl=0;
	
	printf("\nOne string is %s ",one);
	
	in=va_arg(ap,int);
	printf("\nInteger passed is %d ",in);
	
	ch=va_arg(ap,int);
	printf("\nCharacter passed is %c \n",ch);

	cp=va_arg(ap,char*);
	for(;*cp;cp++)
		putchar(*cp);
		
	dl=va_arg(ap,double);
	printf("\nDouble passed is %f ",dl);
}






void main()
{
	chkFun("To check variable argument\n",'p',65,"hello world",	123.345);		

	printf("\n");

}





















