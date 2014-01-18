
/***  conclusions
getchar works same as std input but only for one character
so each thing is taken at a time

%s works not with the string limit or anything with its size
%s tries to identify the '\0' null char for the string


second part is not so sure -
puchar and getchar behaves as working on a stream





         **/


/***** to see the working of getch n getchar  */
#include<curses.h>			//trying for getch
#include<stdio.h>
#include<ctype.h>			//trying getch instead of getchar


main()
{
	char a[10];
	int n=0;
	int c;
	printf("\nEnter  ");
	while((c=getchar())!='\n')
	{
	//	printf("\nEnter  ");
		a[n++]=c;

	}

	a[n]='\0';

	printf("\nstring is  %s \n",a);


	///////////////////////next
	printf("\n NEXT \n");
	//putchar(65);

	while((putchar(getchar()))!='\n');    //may be coz both work on streams


	///////////////weird result
	//not giving the expected result


}
