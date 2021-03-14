/* difference between do-while and while */ 

#include <stdio.h>

int main ()
{
    int a=1, b=0, c;
    do {
        printf ("%d%d\n", a,b);
    a++; b++;
    c = a+b;

    }while (c<0);

    a = 1;
    b = 0;
    c= 0;
    printf ("while\n");
    while (c<0)
    {
        printf ("%d%d\n", a,b);
        a++;b++;
        c = a+b;
    }


    return 0;
}

/* Do while executes at least once, even if it does not meet validation. The while validates before executing 
    RESULT: 
    10
    while
     do you see? the while didn't execute */