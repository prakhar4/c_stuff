/* to find the no. of ones in the binary format of number*/

#include<stdio.h>

main()
{
	int a=16, i, count=0;
	
	while(a>0 )
	{
		if(a & 01)
			count++;
		a >>=1;
	}
	
	printf("\nthe number of ones in bit format is %d ",count);


}























