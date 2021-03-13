/* Read a vector-type matrix A with 6 elements. Create a matrix B of the same type, with each element in matrix B being the factorial of the corresponding element in matrix A. Display matrix B. */


#include <stdio.h>
int main (void)
{
int vetorA[6],vetorB[6],fat,i;
printf ("Enter the values ​​of vector A");
for (int i=0;i<6;i++)
scanf ("%d",&vetorA[i]);
for ( i=0;i<6;i++){
 for(fat = 1; vetorA[i] >= 1; vetorA[i] = vetorA[i]- 1){
 fat = fat * vetorA[i];
 vetorB[i]= fat;
}
}
for ( i=0;i<6;i++){
printf ("%d\n",vetorB[i]);
}
 return 0;
}
