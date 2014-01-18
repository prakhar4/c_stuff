/*
	to test for the declarations used in struct
	using same name
*/

#include <stdio.h>

#define MAXIM(a,b) (((a)>(b))?(a):(b))
#define MINIM(a,b) (((a)<(b))?(a):(b))

struct point
{
	int x; 
	int y;
};

struct rec
{
	struct point p1;
	struct point p2;
};


//	chk something else
callFun()
{
	int j,i;
	i++;
	return i;
}


//correct rectangle so that bot left is p1,
struct rec correctRec (struct rec r2)
{
	struct rec r1;
	r1.p1.x=MINIM(r2.p1.x,r2.p2.x);
	r1.p1.y=MINIM(r2.p1.y,r2.p2.y);
	r1.p2.x=MAXIM(r2.p1.x,r2.p2.x);
	r1.p2.y=MAXIM(r2.p1.y,r2.p2.y);

	return r1;
}




void main()
{
	int point=0;
	struct point dot={4,5};

	//this is invalid- can do only when initialising
/*	dot={1,2}; */

	struct point pts;
	pts=dot;
	
	dot.x++;
	dot.y++;
	
	printf("\ndot is %d %d ",dot.x, dot.y);
	printf("\npts is %d %d ",pts.x, pts.y);
	printf("\npoint is %d ",point);

	//try nested
	
	struct rec rct={{1},{4}};
	printf("\nbot %d  %d  top %d  %d ",rct.p1.x, rct.p1.y, rct.p2.x, rct.p2.y);
	
	struct rec r2;
	r2=rct;
	rct.p1.x++;
	rct.p2.x++;
	
	printf("\nbot %d  %d  top %d  %d ",rct.p1.x, rct.p1.y, rct.p2.x, rct.p2.y);
	
	printf("\nbot %d  %d  top %d  %d ",r2.p1.x, r2.p1.y, r2.p2.x, r2.p2.y);
	


//	chk independently something

	int i;
	for(i=0;i<5;i++)
		printf("   %d ",callFun());


	//chk the return n pass of struct
	
	struct rec rr={5,4,3,2};
	printf("\nbot %d  %d  top %d  %d ",rr.p1.x, rr.p1.y, rr.p2.x, rr.p2.y);
	rr=correctRec(rr);
	
	printf("\nbot %d  %d  top %d  %d ",rr.p1.x, rr.p1.y, rr.p2.x, rr.p2.y);
	




	
	
	
	
	






	
	printf("\n");
}






















