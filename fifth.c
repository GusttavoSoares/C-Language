/* Describe a C program that reads the value of an RA (9-digit number)
and generates a new RA by reversing the 2 most significant digits
and reversing the 2 least significant digits of the initial RA. 
For example, if the initial RA is 972845236 then the new RA must be 792845263.
If the initial RA is 984475213 then the new RA must be 894475231.
The algorithm must read the initial RA and print the new RA.*/

#include <stdio.h>
int main (void){
int RAV[9],RAC[9],i;
printf ("Digite o Ra");for (i=1;i<=9;i++){
scanf ("%d", &RAV[i]);
}
for (i=1;i<=9;i++){
 RAC[i]=RAV[i];
if (i==1){
RAC[1]=RAV[2];
}
if (i==2){
RAC[2]= RAV[1];
}
if (i==8){
RAC[8]=RAV[9];
}
if (i==9){
RAC[9]=RAV[8];
}
}
for (i=1;i<=9;i++){
 printf ("%d",RAC[i]);
} return 0;
}
