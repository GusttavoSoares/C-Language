/* Describe a C language program that reads the value of an RA (9-digit number) and generates a new RA by reversing the least significant 4 digits of the initial RA.
For example, if the initial RA is 972845236 then the new RA must be 972846325.
If the initial RA is 984475211 then the new RA must be 984471125.
The algorithm should read the initial RA and present the new RA..*/

#include <stdio.h>
int main (void){
	
int RAV[9],RAC[9],i; 

printf ("Enter the RA");

for (i=1;i<=9;i++){
scanf ("%d", &RAV[i]);
}

for (i=1;i<=9;i++){
 RAC[i]=RAV[i];
if (i==6){
RAC[6]=RAV[9];
}
if (i==7){
RAC[7]= RAV[8];
}if (i==8){
RAC[8]=RAV[7];
}
if (i==9){
RAC[9]=RAV[6];
}
}

for (i=1;i<=9;i++){
 printf ("%d",RAC[i]);
}
 return 0;
}

