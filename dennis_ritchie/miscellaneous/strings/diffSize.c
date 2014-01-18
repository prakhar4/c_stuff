/*
	to check if the size overflow can be still
	handled by the array 
	or the pointer to the characters

	CONC-
	-with overflow of the size and manipulation 
	with pointers will work temporarily
	-but it depends on memory location
	-so for other data arrays, it will affect 
	 and other data will be affected
	

*/

#include<stdio.h>

copy(char *a, char *b)
{
	while(((*(b++))=(*(a++)))!='\0')
	;
	return;
}

main()
{
	int al=34, po=3425;
	char a[]="hello hello hello world";
	int afs=4,bsr=56;
	char cd[50], b[5]; //cd[50] makes difference
	
	/*
	  the presence of cd[50] gives proper output
	  coz during memory allocation it was right
	  and nothing is overlapping
	  
	  --but in absence of cd[50] a,b are 
	  allocated memory contiguously so it affect
	  the output
	*/
	
	printf("\nSize are %d   %d",sizeof(a),sizeof(b));
	printf("\n%s \n%s",a,b);
	copy(a,b);
	printf("\nA is %s \nB is %s",a,b);
	
	printf("\nSize are %d   %d",sizeof(a),sizeof(b));
	printf("\nA is %s ",a);
	printf("\nB is %s ",b);
	printf("\nB is %s ",b);
	printf("\n");
}











