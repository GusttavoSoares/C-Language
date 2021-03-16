#include <stdio.h>
#include <stdlib.h>
#include "code.c"
#include "TextEdit.c"
int main ()
{
    printf ("Headers!\n");
    int n = 5;
    char name[] = "Spongebob Squarepants";
    int resultSquare = square (n);
    int resultCube = cube (n);
    printf ("Your highlighted name\n");
    less (name);
    printf ("\nSquare of %d is: %d\n", n, resultSquare);
    printf ("Cube of %d is: %d\n", n, resultCube);
    printf ("Pi value: %f\n", _PI);
    



    return 0;
}
