/* Read a 1D matrix A with 10 elements. Create a 2D matrix B with 3 columns, where: 
 -The 1st column of matrix B is formed by the elements of matrix A plus 5;
 - the 2nd column is formed by the value of calculating the factorial of each corresponding element of matrix A;
 - the 3rd column should be formed by the squares of the corresponding elements of matrix A. Display matrix B. */

int main (){
int vetorA[10],matrizB[10][3],i,fat,j,vetorB[10];
printf ("Enter 10 numbers");
for (i=0;i<10;i++){
scanf ("%d",&vetorA[i]);
vetorB[i]=vetorA[i];
}
for (i=0;i<10;i++){
matrizB[i][0]= vetorA[i] + 5;

}
printf ("1 column\n");
for (i=0;i<10;i++){
printf ("%d\n",matrizB[i][0]);
}
for (i=0;i<10;i++)
for(fat = 1; vetorA[i] >= 1; vetorA[i] = vetorA[i] - 1){
fat = fat * vetorA[i];
matrizB[i][1]= fat;
}
printf ("2 column\n");
for ( i=0; i<10; i++ ){
printf ("%d\n", matrizB[i][1]);
}

for (i=0;i<10;i++){
matrizB[i][2]= vetorB[i] * vetorB[i];
}
printf ("3 column\n");
for ( i=0; i<10; i++ ){
printf ("%d\n", matrizB[i][2]);
}
return 0;
}
