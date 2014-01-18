/*
	to check how enum works
*/

#include <stdio.h>

#define ASD 123

enum sky
{
	saturday,
	sunday=-1,
	monday

};

int main()
{

	printf("\n\t%d",saturday);
	printf("\n\t%d",sunday);
	printf("\n\t%d",monday);

	printf("\n\t%d ",ASD);
#ifndef ASD
#undef ASD
#endif


	printf("\n");
}









