/* to see how all we can initialise arrays */

/*  conclusion
1. if left uninitialised then they have garbage value
2. initialised partially then others have 0
3. initialisation is done in order starting from 0
*/

#include<stdio.h>

main()
{
	int arr[15]={1,2,3};
	int i;
	
	for(i=0;i<15;i++)
		printf("   %d  ",arr[i]);
		
	printf("\n");
	



}

















