/* 
Display the results of a multiplication table of any number. This should be printed in the following format:
2 X 1 = 2
2 X 2 = 4
(...)
2 X 10 = 20 */


#include <stdio.h>

int main ()
{

    int i = 0, ntable; 

    printf ("Number table of: \n");
    scanf ("%d", &ntable);

    for (;i<11; i++)
    printf ("%d X %d = %d\n", ntable, i, i*ntable);

    return 0;
}