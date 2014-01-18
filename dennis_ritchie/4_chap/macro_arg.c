/*
	conclusion- 
	MACRO are pure sustitution of text during compilation
	imporance of braces is very much
	
  to check how the substitution of macros work
  and try passing it arguments
  and seeing how to get string in macro using #

*/

#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>

#define ABC printf("\nmy name if john")
#define EFG printf("\nmy name if johny");

#define MAXS(a,b) ((a>b)?(a):(b))

#define SQR(y) y*y 

#define EXPR(expres) printf("\n"#expres " value is %d ",expres); 


main()
{
	int i=0, j=4;

	ABC;
	EFG
	
	printf("\nmaximum of 3 n 5 is %d  ",MAXS(3,5));
	printf("\nmaximum of i n j is %d  ",MAXS(i,j));
	printf("\nmaximum of i++ n j++ is %d  ",MAXS(i++,j++));

	//to say that j++ has been evaluated twice 
	//so this is not preferable
	printf("\nnow i j are %d %d ",i,j); 

	printf("\nthe square of 3 is %d  ",SQR(3));
	printf("\nthe square of j is %d  ",SQR(j));
	
	//the answer is three coz of the absence of braces
	//in the SQR expression for y*y should be (y)*(y)
	printf("\nthe square of i+1 is %d  ",SQR(i+1));

	//to show that MAXS is not replaced inside quotes
	printf("\nMAXS of i n j is %d  ",MAXS(i,j));

	//th show that # gives string substitution of argument
	EXPR(j/i)

	//exercise question for macro done other file
}

















