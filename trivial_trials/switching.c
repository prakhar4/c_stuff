/*
  to check is the position of the default statement would 
  affect the working of the switch statements
  
  position of default does not affect the cases
  it can be anywhere and need not be at end 
  
*/

#include<stdio.h>

void main(void)
{
	int i;
	printf("\nEnter ");
	scanf("%d",&i);
	
	switch(i)
	{
		case 1:
			printf("\n 1 selected \n");
			break;
		default:
			printf("\nDefault selected ");
			
		case 2:
			printf("\n 2 selected \n");
			break;	
		case 4:
			printf("\n 4 selected \n");
			break;
				
		
	
	}


}

