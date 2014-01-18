#include<stdio.h>
#include<stdlib.h>
#include"strCmp.c"

void qSortStr(char **a, int p, int q)
{
	if(p>=q)
		return;
	
	int i,j,k;
	char *temp=NULL;
	j=p;
	for(i=p;i<q;i++)
	{
		if(strCmp(a[i],a[q]) <= 0)
		{
			temp=a[j];
			a[j++]=a[i];
			a[i]=temp;
		}
	}

	temp=a[q];
	a[q]=a[j];
	a[j]=temp;
	
	qSortStr(a,p,j-1);	
	qSortStr(a,j+1,q);	
}

void main()
{
	int i=0;
	char* a[20], *temp;
	char **b, c[10][20];
	
	b=a;
/*	c=a;*/
	

	while(i<6)
	{
		temp=(char*)malloc(30);
		printf("\nEnter str %d ",i);
		scanf("%[^\n]s",temp);
		getchar();
		a[i]=temp;
		i++;
	}
	
	for(i=0;i<=5;i++)
		printf("\n  %s ",a[i]);
	
	qSortStr(a,0,5);
	
	for(i=0;i<=5;i++)
		printf("\n  %s ",a[i]);

	printf("\n");

}
