#include "TextEdit.h"
#include <string.h>


void less (char n[])
{
    printf ("\n---------- %s ----------\n", n);
}

void star (char n[])
{
	 printf ("\n******* %s *******\n", n);	 
}
void count (char n[])
{
	int calc = strlen(n);
	printf ("\nYour name has %d letters\n", calc);
}
