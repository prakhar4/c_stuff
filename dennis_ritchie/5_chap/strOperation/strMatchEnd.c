/*
	given two strings, then check if the second one lies in the 
	ending of the first one
*/

#include<stdio.h>

char* reachEnd(char* a)
{
	while(*a++)
	;
	return --a;
}

//chk if str b lies in the end of str a
//return 0 if matches or else 1
chkMatchEnd(char *a, char *b)
{
	char *bS=b;		//a start
	a=reachEnd(a);
	b=reachEnd(b);
	//a--;
	//b--;
	printf("\nMatched1 %c  %c  ",*(bS),*(a));
	
	while((*b--) == (*a--))
		printf("\nMatched %c  %c  ",*(b+1),*(a+1));

	if(bS-b-1 > 0)		//perfect matchCondition
	{
		printf("\nMatching");
		return 0;
	}
	else
		return -1;

}



void main()
{
	char s[40],t[40];
	int res;
	printf("\nEnter the first str ");
	scanf("%[^\n]s",s);
	getchar();
	printf("\nEnter the second str ");
	scanf("%[^\n]s",t);
	printf("\n1. %s \n2. %s ",s,t);		

	res=chkMatchEnd(s,t);
	printf("\nThe result is %d ",res);

	printf("\n");
}














