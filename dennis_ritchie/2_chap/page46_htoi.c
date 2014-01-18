#include<stdio.h>

int power(int n, int pow)
{
	int i,j=1;
	for(i=0;i<pow;i++)
		j=j*n;
	
	return j;

}




void main()
{
	char a[100];
	int n, i, j, num=0, temp;
	
	printf("\nEnter the string ");
	scanf("%[^\n]s", a);
	
	for(n=0; a[n]!='\0'; n++);
	
	printf("\n\nStrlen is %d ", n);
	
	for(i=n-1; i>=0; i--)
	{
		printf("\n\nThe i value is %d ",i);
		
		if(a[i] >= 'a' && a[i] <='f')
			temp=(a[i]-'a')+10;
		else if(a[i] >= 'A' && a[i] <='F')
			temp=(a[i]-'A')+10;
		else
			temp=a[i]-'0';				
	
	printf("\n\nThe temp value is %d ",temp);
		
		num+=(power(16,n-1-i)*temp);
	}
	
	printf("\n\nthe answer is  %d",num);
}





