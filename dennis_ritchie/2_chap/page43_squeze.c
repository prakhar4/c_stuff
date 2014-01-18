#include<stdio.h>

main()
{
	int n, i, j ,dum;
	char a[100],ch;
	
	/*printf("\nEnter a char ");
	scanf("%c",&ch);*/
	
	printf("\nEnter string ");
	scanf("%[^\n]s",a);
	
	printf("\nEnter the character ");
	scanf("%c%c",&dum,&ch);
	//printf("%c",dum);
	printf("%c",ch);
	
	for(i=0, j=0; a[i]!='\0'; i++)
	{
		if(a[i]!=ch)
			a[j++]=a[i];
	}
	
	a[j]='\0';
	
	
	printf("\nthe squezed string %s ",a);
	
}
