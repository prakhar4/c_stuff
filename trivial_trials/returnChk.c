/*
	to chk return value to shell
*/

#include <stdio.h>

/*int main()*/
/*{*/
/*	printf("\nReturning 5 \n");*/
/*	return 5;*/
/*}*/


#define PPP(a) PP(a)
#define PP(a) printf("\n%s\n",a)
#define PPPP(a) PPP(a)
int main()
{
	char *asd="hello, World";
	PPPP(asd);
}






