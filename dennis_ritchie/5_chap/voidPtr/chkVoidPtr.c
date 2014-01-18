/*
	to check the ast to void type pointer does
	not affect while casting back
	-so try to cast it to some other type
		and see the loss in information
*/

#include <stdio.h>

int main()
{
	int a[]={1,2,3,4,5,6};
	int *ip=a;
	int *ip2;
	
	void *vp;
	char *cp;
	
	vp=ip;
/*	vp++;*/
/*	vp--;*/
	ip2=vp;
	
	printf("\n ip is %d ",vp[2]);
	printf("\n copied ip is %d ",*ip2);

	cp=ip;
	ip2=cp;
	ip2++;	
	printf("\n ip is %d ",*ip);
	printf("\n copied ip is %d ",*ip2);
	

	printf("\n");
	return 0;
}














