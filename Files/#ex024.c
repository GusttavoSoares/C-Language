/*
Read 3 values ​​referring to 3 grades of a student and display a message saying that he was approved, if the average value is greater than or equal to 6.0. If the student was not approved, display a message stating this condition. Display, along with one of the messages, the average value for any condition. */
#include <stdio.h>

int main ()
{
	float n1,n2, nm3;
	
	printf ("Enter the value of the 3 notes\n");
	scanf ("%f%f%f", &n1, &n2, &nm3);
	
	nm3 = (n1+n2+nm3)/3;
	
	if (nm3>6)
	printf ("Approved, grade: %.2f",nm3);
	else 
	printf ("Failed, grade:% .2f: %.2f", nm3);
	
	
	
	return 0;
}
