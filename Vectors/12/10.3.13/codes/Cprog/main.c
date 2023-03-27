/*Code by VS.Anirudh (works on termux)
March 23, 2023
Find the direction cosines of the vector joining the points A (1, 2, –3) and B(–1, –2, 1), directed from $\vec{A}$ and $\vec{B}$.The direction cosines are the cosines of the angles formed by the given vector with the respective axes, given vectors are $\vec{A}$ and $\vec{B}$.*/

#include<stdio.h>       
#include<stdlib.h>
#include<math.h>
#include"lib.h"	                 //Functions
int main()
{
	double **a,**b,**c;
	double **d;		//initializing the variables as matrices
	a=loadtxt("a.dat",2,1);		//loading the point A from the text file
	b=loadtxt("b.dat",2,1);	 	//loading the point B from the text file
	c=loadtxt("c.dat",2,1);
	d=scalar_mul(linalg_add(matmul(a,a,2,1,2),matmul(b,b,2,1,2),matmul(c,c,2,1,2),2,1),2,1,0.5);
	print(d,2,1);
	
	}

