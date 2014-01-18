#include<stdio.h>

void main()
{
char ch=0;
short in=0;

int st=ch;
int  i=0;


for(i=0;; i++)
{
	ch++;
	if(ch < st)
		break;
	
	st=ch;


}

printf("\n the lower limit is  %d  and the upper limit is %d  \n",ch,st);



st=in;
for(i=0;; i++)
{
	in++;
	if(in < st)
		break;
	
	st=in;
	printf("\n %d ", in);


}

printf("\n the lower limit is  %d  and the upper limit is %d  \n",in,st);


printf("\n\n\n %d \n\n", sizeof(char));
printf("\n\n\n %d \n\n", sizeof(short));



}






