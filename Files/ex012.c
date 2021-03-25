/* Read 2 matrix A and B, each of 2D with 5 rows and 3 columns. Create a matrix C of the same dimension, where C is formed by the sum of the elements of matrix A with the elements of matrix B. Display this matrix.  */ 


#include<stdio.h>
#include<conio.h>
int main()
{

int A[5][3], B[5][3], C[5][3],i,j;
for (i=0;i<=4;i++)
for (j=0;j<=2;j++){
printf("Enter array A");
scanf("%d",&A[i][j]);
printf("Enter array B");
scanf("%d",&B[i][j]);
C[i][j]=A[i][j] + B[i][j];
}
for (i=0;i<=4;i++)
for (j=0;j<=2;j++){
printf("The matrix C is: %d", C[i][j]);
}
getch();
return 0;
}

