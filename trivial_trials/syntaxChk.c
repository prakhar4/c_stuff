/*
	to check for null
*/

void main()
{
	char s[]="Hello World!";
	char *t=s;
	(*t)++;
	
	putchar('\n');
	
	for(;*s;s++)
		putchar(*s);
		
	putchar('\n');
}







