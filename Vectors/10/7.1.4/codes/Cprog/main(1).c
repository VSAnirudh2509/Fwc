/*Code by VS.Anirudh (works on termux)
March 14, 2023
Check whether (5,-2),(6,4) and (7,-2) are the vertices of an isosceles triangle:*/
 
#include<stdio.h>       
#include<stdlib.h>
#include<math.h>
#include"lib.h"			//Functions
int main()                 
{
	double **a,**b,**c;		//initializing the variables as matrices
	double x,y;
	int m=2,n=1;
	a=loadtxt("a.dat",2,1);		//loading the point A from the text file
	b=loadtxt("b.dat",2,1);	        //loading the point B from the text file
	c=loadtxt("c.dat",2,1);         //loading the point C from the text file
x=linalg_norm(linalg_sub(a,b,m,n),m);
y=linalg_norm(linalg_sub(b,c,m,n),m);
if(x==y)
{
printf("AB=BC, the Traingle is Isosceles");
}
else
{
printf("AB!=BC, the Traingle is not Isosceles");
}
}
