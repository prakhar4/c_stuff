/*
//to check whether the comma in for loop conditions is 
//&& equivalent or || equivalent


CONCLUSION - in for loop - 
	for(initialisation, condition, inc/dec)
	
	if it is of the form
	for(init; cond1, cond2, cond3; inc/dec)
	
	then effectively only cond3 is checked

*/


#include<stdio.h>

main()
{
	int a=3, b=5;
	int i;
	
	/*for(i=0; b!=5, i<3 ,a!=3;i++)		//no output
		printf("\nya ya with %d ",i);
	
	for(i=0; b!=5, i<3 ,a==3;i++)		//infinite loop
		printf("\nya ya with %d ",i);
	*/
	for(i=0; b!=5,a!=3, i<3 ;i++)		//only thrice

		printf("\nya ya with %d ",i);
	
}








