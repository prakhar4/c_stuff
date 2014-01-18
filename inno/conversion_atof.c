/*/////to check when we use the predefined libary function
for conversion then should the string have '\0' at end */


/*  conclusions
the working of atoi and atof defined in stdlib work as follows
both of them parse the string passed to them in such a way that
-a string can have any number of gaps ' ' or '\t' or '\n'
in front of string
-but it should be having numbers i.e digits after gaps
it cannot be having alphabets in begining and numbers later
so that in such cases it returns 0
-it stops parsing for more digits when first alphabet is found
*/







#include<stdio.h>
#include<stdlib.h>

main()
{
	char str[100], ch;
	int i=0;
	double a;
	
	while((str[i++]=getchar())!='m');
	str[--i]='\0';

	a=atof(str);
	printf("\nTeh float is %f \n",a+2);
	
	i=atoi(str);	
//	printf("\n%s\n",str);
	printf("\n%d\n",i+5);


}



























