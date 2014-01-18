/*
	to check if the string constant return a 
	char pointer or not
	-to check if we can use string const with 
	 character pointer interchangeably
	-if we can manipulate a str const using the 
	 pointer referring to it 

	CONC- 
---	we can use char pointers or str const or 
	char array interchangeably as all of them 
	return CHAR POINTER --> char*
--- we cannot manipulate the str const using 
	its pointers 



*/

#include<stdio.h>

main()
{
	char strArr[]="hello world\n";
	char *strPtr= "nice world\n";
	
	printf(strPtr);
	printf(strArr);
	
	printf("\n %c",*strArr);
	printf("\n %c",*strPtr);
	
	(*strArr)--;
	//(*strPtr)++;   ERROR	
	
	printf("\n %c",*strArr);
	printf("\n %c",*strPtr);
	
	
	
	printf("\n");
}


















