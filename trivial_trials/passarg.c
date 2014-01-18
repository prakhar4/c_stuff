/*
	passing arguments to the main function andd chacking for spaces
*/

#include<stdio.h>

main(int argc, char* argv[])
{
	printf("\nNUmber is %d",argc);
	int i;
	
	for(i=0;i<argc;i++)
		printf("\nstr %d is %s",i+1,argv[i]);
		
	
	
	
	
	

}













