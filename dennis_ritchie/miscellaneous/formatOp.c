/* to ckh how formatted output works */

#include<stdio.h>
main()
{
	int i, a=12;
	for(i=0; i<10; i++, printf("\n this is row %d and num is %16d",i,(a*=13)));
}
