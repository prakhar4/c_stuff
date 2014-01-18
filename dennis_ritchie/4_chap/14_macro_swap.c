/*
	here given the type of swaping variables
	we declare new variables of that type and perform swap

	BUT WHAT IF THOSE VARIABLES ALREADY EXIST
	hence we use- block structure for macro 
	variables in this { } will not affect outside	
	
	for continuing to write the variables in multi lines
	we just end the previous line with \
		
	macro for swap of the form SWAP(t,p,q)
	where t is the type of p, q
*/

#include<stdio.h>

//as do while is block structured
//so we can just initialise new variable without problem

#define Swap(t,x,y) \
do			\
{t z=x;		\
x=y;		\
y=z;}		\
while(0);

//this one does not work properly
//so in order to execute single statement we use above
//do while is also best block structured and surely executed

 //{t i=x; x=y; y=i;}


main()
{
	int i=1, j=5;
	printf("\nthe values before swaping are %d %d  ",i,j);

	Swap(int,i,j)
	printf("\nthe values after swaping are %d %d  ",i,j);

}
















