/*
	just have a normal gcc of the file i.e compile it as usual
	then for executing it- ./a.out < inp.txt
	this would feed in the txt file as standard input
	
	if the inputs are more than the required then no problem 
	they are just not taken into account
	
		
	if the inputs are lesser than required or the types are not 
	matched or some thing of this sort then the progrm behaves
	in a different non-required way
	

*/

#include<stdio.h>

main()
{
	int i,j,k;
	char a[100];
	printf("\nEnter string ");
	scanf("%[^\n]s",a);

	printf("\ninput is- %s\n",a);
	
	
	printf("\nEnter second val ");
	scanf("%d",&j);
	j++;
	printf("\nchanged value is %d\n",j);
	
	
	printf("\nEnter next val ");
	scanf("%d",&k);
	k++;
	printf("\nchanged value is %d\n",k);
}
