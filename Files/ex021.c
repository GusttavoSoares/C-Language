/* 
Create a program that displays the Fibonacci series up to the fifteenth term. The Fibonacci series is formed by the sequence: 1, 1, 2, 3, 5, 8, 13, 21, 34 .... etc. This series is characterized by the sum of a later term with its subsequent previous one.  */ 


#include <stdio.h>

int main (){

	
	int cont=1;
	int a=1;
	int b=1;
	int c=0;
	
	printf ("1\n");
	while (cont<15){
	
	cont++;
	c = a + b;
    a = b;
    b = c;
    
	printf ("%d\n", a);
}
	return 0;
}