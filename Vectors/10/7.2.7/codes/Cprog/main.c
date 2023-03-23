/*Code by VS.Anirudh (works on termux)
March 23, 2023
Find the coordinates of point $\vec{A}$, where AB is the diameter of a circle where the center is (2,-3) and $\vec{B}$ is the point (1,4):*/
 
#include<stdio.h>       
#include<stdlib.h>
#include<math.h>
#include"lib.h"			//Functions
int main()                 
{
	double **a,**b,**c;		//initializing the variables as matrices
	int m=2,n=1;
	double r1=sqrt(50.0);
	b=loadtxt("b.dat",2,1);		//loading the point A from the text file
	c=loadtxt("c.dat",2,1);	 	//loading the point B from the text file
	a=linalg_sub(scalar_mul(c,m,n,2.0),b,m,n);
	//printing the results
	print(a,m,n);       
	print(b,m,n);
	printf("%lf",r1);       
	//saving the results
	save_a(a,m,n);
	save_b(b,m,n);
	save_r1(r1);
}
