/*
CONC - YES, we can define one inside another
and there is no order required for placing 
these #define statements

 *	to see how #define works when we have nested behaviour
 *	for #define
 *	whether it is replaced twice with #define statements
 */
#include <stdio.h>

#define PPP(a) PP(a)
#define PP(a) printf("\n%s\n",a)
#define PPPP(a) PPP(a)

int main()
{
	char *asd="hello, world";
	PPP(asd);
	return 0;
}

















