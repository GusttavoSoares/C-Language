/* Suppose that a simple virus has infected the university's database system and that, as the only damage, it has altered the students' RA's. 
After some time, it was discovered that given the RA generated by the RAV virus = x1 x2 x3 x4 x5 x6 x7 x8 x9,
the correct RA RAC = y1 y2 y3 y4 y5 y6 y7 y8 y9 could be obtained through the following operations: y1 = x1, y2 = x2, y3 = x8, y4 = x7, y5 = x5, y6 = x6, y7 = x3, y8 = x4, y9 = x9
For example, if RAV = 197845602 then RAC = 190645782. Design a C program that reads RAV and generates 9-digit RAC. */ 

#include <stdio.h>

int main (){

int RAV[9],RAC[9],i; 

printf ("Enter the RA");

for (i=1;i<=9;i++){
scanf ("%d", &RAV[i]);
}
for (i=1;i<=9;i++){
    RAC[i]=RAV[i];
    if (i<=9){
if (i==3){
    RAC[3]=RAV[8];
}
if (i==4){
    RAC[4]=RAV[7];
}
if (i==7){
    RAC[7]=RAV[3];
}
if (i==8){
    RAC[8]=RAV[4];
}
}
}
for (i=1;i<=9;i++){
    printf ("%d",RAC[i]);
}

    return 0;
}

