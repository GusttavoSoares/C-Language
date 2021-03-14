/* Read 2 matrices A and B, each with 1D for 4 elements. Create a 2D C matrix, where the 1st column of matrix C should be formed by the elements of matrix A multiplied by 2 and the 2nd column should be formed by the elements of matrix B subtracted from 5. Display matrix C. */

#include <stdio.h>

int main (){
	
	int vetorA[4], vetorB[4],matriz[4][2],i;
	printf ("Enter 4 numbers");
	for (i=0;i<4;i++){
		scanf ("%d",&vetorA[i]);
	}
	printf ("Enter +4 numbers");
	for (i=0;i<4;i++){
		scanf ("%d",&vetorB[i]);
	}
	for (i=0;i<4;i++){
		matriz[i][0]=vetorA[i]*2;
	}
	for (i=0;i<4;i++){
		matriz[i][1]=vetorB[i] - 5;
	}
	for (i=0;i<4;i++){
		printf ("%d",matriz[i][0]);
	}
	printf ("\n-------Column 2-----\n");
	for (i=0;i<4;i++){
		printf ("%d",matriz[i][1]);
	}
	return 0;
}
