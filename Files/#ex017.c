/* create a program that uses a subroutine to calculate the Fibonacci series of N terms. The series is formed by the sequence: 1,1,2,3,5,8,13,21,34 ... etc. It is characterized by the sum of a later term with its subsequent previous one. */


#include <stdio.h>
 
int fibo();

int main (){
    int a;
    printf ("How many numbers do you want?\n");
    scanf ("%d", &a);
    fibo (a);
    return 0;
}
int fibo(int a) { 
    int f1, f2, aux, i;
 
    f1 = 0; 
    f2 = 1; 
    printf(" 1\n"); 
 
    for(i = 0; i < a-1; i++) { 
	    aux = f1 + f2; 
	    f1 = f2; 
	    f2 = aux; 
 
	    printf("%d\n", aux); 
    } 
}
