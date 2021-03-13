/* Read two arrays A and B of the vector type with 5 elements each. Create a matrix C, where each element of A is the subtraction of the corresponding element of A with B. Display matrix C. */ 

#include <stdio.h>
int main (){
int vetorA[5],vetorB[5],vetorC[5],aux;
printf ("Enter 5 numbers");
for (aux=0;aux<5;aux++){
scanf ("%d",&vetorA[aux]);}
printf ("Enter more 5 numbers");
for (aux=0;aux<5;aux++){
scanf ("%d",&vetorB[aux]);
}
for (aux=0;aux<5;aux++){
vetorC[aux]= vetorA[aux]- vetorB[aux];
}
for (aux=0;aux<5;aux++){
printf ("Vector C %d:%d\n",aux,vetorC[aux]);
}
return 0;
}