#include <stdio.h>
#include <stdlib.h>
#include "code.c"
#include "TextEdit.c"

int main ()
{
    printf ("Headers!\n");
    int n = 5;
    char name[250];
    int resultSquare = square (n);
    int resultCube = cube (n);

    printf ("What's your name?\n");
    scanf ("%s", name);
    printf ("Your highlighted name\n");
    less (name);	star (name); count (name);

    printf ("\nSquare of %d is: %d\n", n, resultSquare);
    printf ("Cube of %d is: %d\n", n, resultCube); 
    printf ("Pi value: %f\n", _PI); // print define
    



    return 0;
}
