/* Read 12 elements of a vector-type matrix, put them in order
decreasing and presenting the ordered elements. */

#include <stdio.h>
int main (){
int vetor[12],aux,j,i;
printf ("Enter 12 numbers");
for ( i=0; i<12;i++){
scanf ("%d",&vetor[i]);
}
for (i=0;i<12;i++) 
for (j=i+1;j<13;j++) 
if (vetor[i] < vetor[j])
{
aux = vetor[i];
vetor[i] = vetor[j];
vetor[j]= aux;
}
printf ("The values in order:");
for (j=1;j<13;j++){
printf (" %d\n ",vetor[j]);
}return 0;
}

