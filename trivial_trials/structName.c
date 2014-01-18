/*
/*	to see if same names are permissible
*/

/*#include <stdio.h>*/

/*struct TAG*/
/*{*/
/*	int a;*/
/*	char b;*/
/*} x;*/

/*typedef struct TAG node;*/

/*int main()*/
/*{*/
/*	node y;*/
/*	int node;*/
/*	*/
/*	node=5;*/
/*	y.a=node;*/
/*	y.b='e';*/
/*	*/
/*	printf("\n %d %d %c ",node, y.a, y.b);*/






/*}*/





















/*#include <stdio.h>*/
/*#include <stdarg.h>*/

/*void chkFun(char *one, ...)*/
/*{*/
/*	va_list ap;*/
/*	va_start(ap,one);*/
/*	*/
/*	int in=0;*/
/*	char ch=0;*/
/*	char *cp=NULL;*/
/*	double dl=0;*/
/*	*/
/*	printf("\nOne string is %s ",one);*/
/*	*/
/*	in=va_arg(ap,int);*/
/*	printf("\nInteger passed is %d ",in);*/
/*	*/
/*	ch=va_arg(ap,int);*/
/*	printf("\nCharacter passed is %c \n",ch);*/

/*	cp=va_arg(ap,char*);*/
/*	for(;*cp;cp++)*/
/*		putchar(*cp);*/
/*		*/
/*	dl=va_arg(ap,double);*/
/*	printf("\nDouble passed is %f ",dl);*/
/*	*/
/*	in=va_arg(ap,int);*/
/*	printf("\nCharacter passed is %d \n",in);*/
/*}*/

/*void main()*/
/*{*/
/*	chkFun("To check variable argument\n",'p',65,"hello world",	123.345);		*/
/*}*/


#include <stdio.h>
#include <stdarg.h>

int main()
{
	int i,j;
	i=scanf("asdf");
	printf("\n%d\n",i);
}















