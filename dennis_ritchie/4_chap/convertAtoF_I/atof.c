/*converts the string s to its double-
precision floating-point equivalent. atof if an extension of atoi, 
 It handles an optional sign and decimal point, and the presence or
absence of either part or fractional part.
*/

#include<stdio.h>
#include<ctype.h>




double atoF(char a[])
{
	double num;
	int sign=1, i, enable, pos;
	
	for(i=0; isspace(a[i]) && a[i]!='\0'; i++);
	
	if(a[i]=='-')
	{
		sign=-1;
		i++;
	}
	
	for(num=0; isdigit(a[i]) && a[i]!='\0'; i++)
	{
		num*=10;
		num+=a[i]-'0';
	}	
	
	if(a[i]=='.')
	{
		enable=1;
		i++;
	}
	
	pos=1;
	
	if(enable)
	{
		for(;isdigit(a[i]) && a[i]!='\0'; i++)
		{
			num*=10;
			num+=a[i]-'0';	
			pos*=10;
		}
	}
	/*int ten=1;
	for(i=0;i<pos;i++)
		ten*=10;*/
	
	num/=pos;
	num*=sign;
	
	return (num);
}



/*
int atoI(char a[])
{
	//double atoF(char []);						//func prototype required if written above
	//printf("\nthis is atoi working %f\n",atoF(a));
	//int p=o;
	//printf("\nthis is atoi %d\n",p);
	return ((int)atoF(a));
}*/

int main()
{
	//int atoI(char []);		//prototypes required if written above all func. 
	//double atoF(char []);
	char a[100];
	
	printf("\nEnter the a string with float values ");
	scanf("%[^\n]s",a);

	printf("\nthe final doulbe is %f \n",atoF(a));
	
	printf("\nthe integer equivalent is %d\n",atoI(a));
	return 0;
	
}
