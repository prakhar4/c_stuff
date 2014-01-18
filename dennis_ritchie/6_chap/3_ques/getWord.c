/*
	to return a word from file or terminal
	by accepting it as an argument
	
	WORKS--
	it returns the word alone in the string
	without prefix or suffix spaces
	
	and return 0 when der is just EOF
	so return value is 	
	
	
*/

#include"getCh.c"

static int lineNo =1;

int getWord(char* str)
{
	int c;
	int l=0;
	
	while(isspace(c=getChar()))
		if(c=='\n')
			lineNo++;
			
	if(c!=EOF)
		str[l++]=c;
	
	while(isalnum(c=getChar()))
	{
		if(c==EOF)
			break;
		str[l++]=c;
	}
/*	str[l++]=c;*/
	str[l]=0;
	ungetChar(c);
	return l;
}




