/*
*/

#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

double ext_atof(char a[])
{
	int i,sign=1, esign=1, chk, mult=0;
	double num, pow=0, epow=0, dm;
	char c;
	
	for(i=0; isspace(a[i])==1; i++);
	
	if(a[i]=='-')
		sign=-1;
		
	if(a[i]=='+' || a[i]=='-')
		i++;
		
	for(num=0; isdigit(a[i]); i++)
		num=(num*10)+(a[i]-'0');
		
	if(a[i]=='.')
		i++;
		
	for(pow=0; isdigit(a[i]); i++)
	{
		num=(num*10)+(a[i]-'0');
		pow++;
	}
	
	if(a[i]=='e')
	{	
		i++;
		if(a[i]=='-')
			esign=-1;
			
		if(a[i]=='+' || a[i]=='-')
			i++;
		
		for(epow=0; isdigit(a[i]); i++)
			epow=(epow*10)+(a[i]-'0');
	} 
	chk=((esign*epow) - pow);
	
	mult=abs(chk);
	 
	for(i=0, dm=1; i<mult; i++)
		dm*=10;
	
	if(chk>0)
		num*=dm;
	else if(chk<0)
		num/=dm;
			
	return num;
}





























