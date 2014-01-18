// to convert to int type using float conversion
/*ALSO SEE THE IMPORTANCE OF FUNCTION PROTOTYPE - 
JUST TRY COMMENTING OUT THE FUNCTION PROTOTYPE - IT GIVES A WRONG ANSWER
prototype is required as it is in a different file
so it does not know what to return what to read
*/


#include<stdio.h>

int atoI(char a[])
{
	double atoF(char []);	//FUNC PROTOTYPE
	//printf("\nthis is atoi working %f\n",atoF(a));
	/*int p=o;
	printf("\nthis is atoi %d\n",p);*/
	return ((int)atoF(a));
}




