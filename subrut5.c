//@author   Bastidas Verdin Miguel Antonio
//@Date     03/12/2021

#include <iostream>

int poly3 ( int a , int b , int c , int d , int x ){
	return a*x *x *x + b* x* x + c*x + d ;
}
int main ( ){
	printf (" %d\ n %d \n %d\ n" ,
		poly3 (1 , 2, 3, 4, 5) ,
		poly3 (1 , -1 , 1 , -1 , 8) ,
		poly3 (2 , 0, 0, 0, 8));
}
