#include <stdio.h>
#include <stdlib.h>
#include "code.c"
int main ()
{
    printf ("Headers!\n");
    int n = 5;
    int resultSquare = square (n);
    int resultCube = cube (n);

    printf ("Square of %d is: %d\n", n, resultSquare);
    printf ("Cube of %d is: %d\n", n, resultCube);
    printf ("Pi value: %f\n", _PI);
    return 0;
}