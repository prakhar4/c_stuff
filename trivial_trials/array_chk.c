/*
	to check if- a local variable is returned then will it expire
	out of scope 
*/

#include<stdio.h>

int* func()
{
	int arr[]={1,2,3,4,5,6},i;
	
	for(i=0;i<6;i++)
		printf("\t%d  ",arr[i]);
		
	return arr;

}

main()
{
	int i=0, *arr=NULL;
	
	arr=func();
	arr[3]++;
	arr[2]--;
	for(i=0;i<6;i++)
		printf("\t%d  ",arr[i]);

}

















