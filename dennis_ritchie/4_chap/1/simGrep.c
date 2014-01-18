/*
    execute the file output and feed in search string
    	 or you could also input it through a file
    	 

*/

#include<stdio.h>
#define LIM 80

main()
{
	char ss[20];
	printf("\nFeed in ur search string ");
	scanf("%[^\n]s",ss);
	
	char a[120];
	int c;
	
	while(getLine(a,LIM)>0)
	{
		if(searchPat(a,ss)>0)
			printf("%s",a);
	}
}
