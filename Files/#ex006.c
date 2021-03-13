/* Read 5 elements in an array A type vector.
Create a matrix B of the same dimension with the elements of matrix A multiplied by 3.
Display matrix B. Element B [1] should be implied by element A [1] * 3,
element B [2] by element A [ 2] * 3 and so on, up to 5.*/

#include <stdio.h>
int main (){
	
int vetorA[5],vetorB[5],aux;

printf ("Enter 5 numbers");

for (aux=0;aux<5;aux++){
scanf ("%d",&vetorA[aux]);
}
for (aux=0;aux<5;aux++){
vetorB[aux]=vetorA[aux]*3;
printf ("%4d",vetorB [aux]);
}
return 0;
}

