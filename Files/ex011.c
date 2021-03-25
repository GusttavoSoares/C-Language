/* Read 8 elements in an array A type vector.
 Create a matrix B of the same dimension with the elements of the matrix multiplied by 5. 
 Display matrix B in ascending order.
  Create a routine to search for the elements stored in matrix B.*/ 
#include <stdio.h>

int main (){


int vetorA[8],vetorB[8], i,j,aux,pesq,acha;
char R;

printf ("Enter 8 numbers");

for (i=0;i<8;++i){
	scanf ("%d",&vetorA[i]);
	vetorB[i] = vetorA[i] * 5;
	
}
for (i=0;i<8;i++)
	for (j=1;j<=8;j++)
	
if (vetorB[i] < vetorB[j]){
	aux = vetorB[i];
	vetorB [i] = vetorB[j];
	vetorB [j]=aux;
}
for (i=0;i<8;i++){
	printf("%d\n",vetorB[i]);
	
}
R='s';
while (R=='s'|| R=='S'){

printf ("Enter the number to be searched\n");
fflush (stdin); scanf("%d",&pesq);
i=0; 
acha = 0;
while (i <=7 && acha==0 )

if (pesq==vetorB[i])
acha = 1;
else 
i+=1;
if (acha==1)
printf ("%d located in position %d ",pesq,i+1);
else 
printf ("%d not found\n ",pesq);
printf ("do you wish to continue? type 's'for yes  and 'n'for no");
fflush (stdin); scanf("%s",&R);

}
return 0;
}
