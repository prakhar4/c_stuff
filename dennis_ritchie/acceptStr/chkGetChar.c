/*
	to test the getchar
*/

#include"getCh.c"

main()
{
	char strs[40];
	int flg=0;
	int i=0,c;
	
	while((c=getChar())>0)
	{	
		if(c==EOF)
		{}
		else if(c=='o' && flg==0)
		{
			~flg;
			ungetChar(c);
		}
		strs[i++]=c;
	}
	strs[i]=0;
	printf("\n%s",strs);	
}
