/* conclusion - the static variables local to a func dont expire when the func expires 
the varaible still retains its values as earlier */

/*this is to check the usage of static variable inside a function
as a local variable*/

/*it is supposed to remain existant even after the function has 
been expired*/

/*so each time we call the function and it expires - it should maintain its values*/

#include<stdio.h>


/*int a=5;*/
/*int b=a;*/  //not allowed as global variable have to be initialised only with constants

int chk()
{
	static int a=1;
	
	printf("\nFunc called with a as %d \n",a);
	
	int i;
	for(i=0;i<a;i++)
		printf("   %d  ",i);
	
	a++;
	printf("\n");
	return 0;
}



main()
{
	chk();
	chk();
	chk();



}
















