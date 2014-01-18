/*
	to implement the passing of arguments 
	in flexible manner as  -x -n -g or -xng 
	or any such combinations
*/

#include <stdio.h>
static int q=0;

int main(int argc, char** argv)
{
	int xx=0, gg=0, nn=0;
	char c=0;
	
	
	while(--argc >0 && (*++argv)[0] == '-' )
	{
		
		while((c=*(++argv[0])))
		{
			switch(c)
			{
				case 'x':
					xx=1;
					break;
				default:
					printf("\nUSAGE:: %d",q++);
					break;
				case 'g':
					gg=1;
					break;
				case 'n':
					nn=1;
					break;
			}
		}
	}
	
	printf("\n  nn  %d   gg  %d   xx  %d ",nn,gg,xx);
	
	
	printf("\n");

}

















