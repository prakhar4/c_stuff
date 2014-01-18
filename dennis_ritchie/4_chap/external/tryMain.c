#include<stdio.h>

void push(float);
float pop(void);

 int top=-1;
float stk[100];

void see(void)
{
	int i;
	
	for(i=0;i<=top;i++)	
		printf("   %f   ",stk[i]);

}

main()
{
	int ch;
	float inf;
	
	while(1)
	{
		printf("\nEnter choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter number to ins ");
				scanf("%f",&inf);	
				push(inf);
				break;
			case 2:
				printf("\nPopped result is %f \n",pop());
				break;
			case 3:
				see();
				break;
			case 4:
				break;
		}


	}



}



























