/*
	this is show #if #endif works
	
	#if defined same as #ifdef
	#if !defined same as #ifndef
	
*/
#include<stdio.h>
#include"one.h"

#ifndef ABC
	#include "two.h"
#endif

main()
{
	printf("\nThe value of ABC is %d ",ABC);
	
	printf("\nThe value of LMN is %d ",LMN);
	

}
	
	
	
	
	
	
	
