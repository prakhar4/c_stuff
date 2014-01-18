/*
	to get an integer from func getInt that would return status of EOF
	and return value by reference

*/

#include<stdio.h>
#define MAXS 100
int getInt(int *);

main()
{
	int arr[MAXS];
	int n;
	int i;
	for(n=0; n<MAXS && (i=getInt(&arr[n])!=EOF)  ; n++);
	
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("   %d  ",arr[i]);
	}
	printf("\n");
	
	










}









