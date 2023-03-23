/*Code by VS.Anirudh (works on termux)
March 23, 2023
Find the Value of y for which the distance between the points P(2,-3) and Q(10,y) is 10 units:*/
 
#include<stdio.h>       
#include<stdlib.h>
#include<math.h>
#include"lib.h"			//Functions
int main()                 
{
	double **a,**b;		//initializing the variables as matrices
	int m=2,n=1;
	a=loadtxt("a.dat",2,1);		//loading the point A from the text file
	b=loadtxt("b.dat",2,1);	 	//loading the point B from the text file
	//printing the results
	print(a,m,n);       
	print(b,m,n);       
	//saving the results
	save_a(a,m,n);
	save_b(b,m,n);
}
