/*difference between
 p++;       (*p)++;        *(p++);
*/

#include <stdio.h> 

void main ()
{
	int i = 34; int *p;
	p = &i; // p equals the memory address of i
	printf ("%d\n", *p); // p = & i, then p = 34
    printf ("%d\n", p);

	(*p)++; // gives +1 p value
	printf ("%d\n", *p); // p = 35

    *p++; // assigns +1 in p memory (4 bytes)
    printf ("%d\n", p); // p address
	
}

/* RESULT
34
6422296
35
6422300 */ 