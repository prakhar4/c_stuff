/*
	to check for the value of ABC
	and further take a decision to include next file
	
*/


#include "one2.h"

#ifdef ABC
	#if ABC==123
		#include "two1.h"
	#elif ABC==xyz
		#include "two2.h"
	#endif
#endif

#include<stdio.h>

main()
{
	printf("\nThe value of LMN is %d ",LMN);

}







