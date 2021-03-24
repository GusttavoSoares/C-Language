/* Fibonacci 1
First way to solve fibonacci (There is more in my other codes)

The user must specify how many houses (n) he would like to view

Reference: https://sites.google.com/a/liesenberg.biz/cjogos/home/materiais-de-apoio/topicos-relativos-a-c/recursao/serie-de-fibonacci


*/
   
#include <stdio.h>

int fib (int  n)
{
  int sum;
  int fib1 = 1, fib2 = 1;
  for (int i = 3; i <= n; i++)
    {
      sum = fib1 + fib2;
      fib1 = fib2;
      fib2 = sum;
    }
  return fib2;
}

int
main (int argc, char **argv[])
{
  int amountt;	
  printf ("Enter a number, please > 3");  // How many numbers do you want to see in the sequence
  scanf ("%d", &amountt);
  if (amountt > 3){
  printf ("1\n");
  printf ("1\n");
  printf ("2\n");
  for (int n = 4; n <= amountt; n++)
    {
      printf ("%i\n", fib (n));
    }
  }
  return 0;
}

