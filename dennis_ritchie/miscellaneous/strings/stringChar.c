#include<stdio.h>
	
main()
{

	char a[100];
	int i, n;
	n=12345;
	
	
		
	
	/*scanf("%[^+]s",a);

	printf("\n%s\n",a);

	for(;;)  //infinite loop
	//while()
		printf("\nya");
	*/
	
	
	for(i=0; n!=0; i*=10, i+=(n%10), n/=10)
	{
		printf("\n %d  %d \n",n,i);
	
	}
	
	printf("\n%d\n",i);









}












