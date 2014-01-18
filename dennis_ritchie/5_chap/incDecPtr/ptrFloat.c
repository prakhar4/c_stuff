/*
	to see if the increment n decrement are 
	happening with proper size in case of float
	- as for char the size is one , so one cant
	directly conclude about object size

	CONC- the arithmatic i.e inc/dec or even the
	subtraction of two pointers happen as per
	the size of the data type
	---IMP- we get only processed value
	and we dont have to care for size of each 
	
	---IMP - we cannot subtract two pointers of
	different types as below.
	
*/

#include<stdio.h>

void fun(float a[], char str[])
{
	int n=0;
	float *tem=a;
	for(;*a!=2.0;a++)
		n++;
		
	printf("\nelements till 2 are %d ",n);
	printf("\nsuch elements are %d ",a-tem);
	//printf("\ndiff of different %d",tem-str);
	//INVALID as both the ptrs are of different 
	//	types
	
	return;

}



void main()
{
	float a[20], *ptr;
	ptr=a;
	char strs[]="hello world";
	
	int n,i;
	printf("\nhow many elements ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
		scanf("%f",&a[i]);
		
	fun(ptr,strs);

}













