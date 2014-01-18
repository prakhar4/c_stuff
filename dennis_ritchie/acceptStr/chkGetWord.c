/*
	to see if it is taking word by word
*/

#include<stdio.h>
#include "getWord.c"

main()
{
	char strs[20];
	while(getWord(strs) > 0)
	{
		printf("-%s-\n",strs);
	
	}
	
	printf("\nEnd");
}
