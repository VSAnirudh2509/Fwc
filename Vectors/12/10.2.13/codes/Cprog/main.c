/*Code by VS.Anirudh (works on termux)
March 23, 2023
Find the direction cosines of the vector joining the points A (1, 2, –3) and B(–1, –2, 1), directed from $\vec{A}$ and $\vec{B}$.The direction cosines are the cosines of the angles formed by the given vector with the respective axes, given vectors are $\vec{A}$ and $\vec{B}$.*/

#include<stdio.h>       
#include<stdlib.h>
#include<math.h>
#include"lib.h"	                 //Functions
int main()
{
	double **a,**b,**m,**mcap;		//initializing the variables as matrices
	a=loadtxt("a.dat",3,1);		//loading the point A from the text file
	b=loadtxt("b.dat",3,1);	 	//loading the point B from the text file
	m=linalg_sub(a,b,3,1);
	
	//printing the results
	//print(m,3,1);
	//saving the results
	//save(m,3,1);
	double n=linalg_norm(m,3);
	printf("%lf",n);
	mcap=scalar_mul(m,3,1,(1/n));
	print(mcap,3,1);
	
	
	}

