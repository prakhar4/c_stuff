#include<string.h>


int searchPat(char a[], char b[])
{
	int len=strlen(a), i, j, k, len2=strlen(b);

	
	for(i=0;i<len;i++)
	{
		for(j=i, k=0; a[j]==b[k] && b[k]!='\0' && a[j]!='\0'; j++, k++);
		
		if(k>0 && b[k]=='\0')
			return (len-i-len2);
			
	}
	return -1;
	
}

