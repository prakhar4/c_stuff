/* to insert a space after a number and insert a newline char after 10 column */

#include<stdio.h>

main()
{
	int i, n=43, p=5;
	
	for(i=0;i<n;i++)
		printf("%9d%c",(p++), ((i%6)==5)?'\n':' ');

}

/* we use ? : operator coz we have if else situation
we insert either a space or a new line depending upon condition 
hence we use */
