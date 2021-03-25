/* 
Read an N number less than or equal to 50 and display the value obtained from successively multiplying N by 3 while the product is less than 250 (N * 3, N * 3 * 3, N * 3 * 3 * 3, etc. ) 
*/ 

#include <stdio.h>

int main (){
	
	int n;
	
	printf ("Enter the value of N\n");
	scanf ("%d", &n);
	
	if (n<=50){
	
	while (n<250){
	
	printf ("N value:%d\n",n);
	n= n*3;
	
}
	

}
	

	return 0;
}
