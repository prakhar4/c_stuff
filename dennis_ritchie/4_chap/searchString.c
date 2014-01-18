// to search for a substring in a given substring

#include<stdio.h>
#include<string.h>

void main()
{
	char a[100], b[100];
	int len, i, j, k, flg=0;
	
	printf("\nEnter the first string ");
	scanf("%[^\n]s",a);
	
	getchar();
	printf("\nEnter the search string ");
	scanf("%[^\n]s",b);
	
	printf("\nfirst is -%s \nsecond is -%s\n",a,b);
	
	
	len=strlen(a);
	printf("\nlen is %d\n", len);
	
	for(i=0;i<len;i++)
	{
		for(j=i, k=0; a[j]==b[k] && b[k]!='\0' && a[j]!='\0'; j++, k++);
		
		if(k>0 && b[k]=='\0')
		{
			printf("\nfound !!!\n");
			flg=1;
		}	
	}
	

	if(!flg)
		printf("\nnot found!!!\n");
}
