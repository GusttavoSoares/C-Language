/* elaborate a program that has a subroutine that performs and allows to display the
total sum of the first N whole numbers, defined by an operator.
(1 + 2 + 3 + ... + N). */ 

#include <stdio.h>

int somar();
int main()
{
 int i;
printf("Up to how much you want to add?");
scanf("%d", &i);
somar(i);
return 0;
}
int somar (int i)
{
int soma, cont;
for(soma=0,cont=1;cont <=i;cont++)
{
soma=cont +soma;
}
printf("total sum equal to: %d", soma);
}