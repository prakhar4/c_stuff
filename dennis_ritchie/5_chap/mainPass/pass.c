/*
	to check if we can pass * in main
*/

#include <stdio.h>

main(int argc, char** argv)
{
	while(*argv++ !=NULL)
		printf("\n%s ",*argv);
		
	printf("\n");



}







