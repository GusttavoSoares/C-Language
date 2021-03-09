/*
Develop an algorithm that controls the ages of 50 administrative staff at a school and displays retirees and active workers. The algorithm in question should perform the following routines:
a-register the 50 administrative staff and their ages
b-classify the registered administrators
c-correct administrative and / or ages that have been registered with errors
d-search administrative by name and age
e-list retired employees (> = 60 years)
f-list active administrators */ 

#include <stdio.h> 
#include <string.h> 
void registerr();
int auxi, i, searchname() , listar(), listactive(), rank() , amend() , searchage();
char letra,aux;

struct admin
{
char nomes[100],nomesaux[100];
int idade;
};
struct admin pessoas[50]; // mudar numero
int main (){


while (letra != 's')
{ 
printf ("\n registerr - a\n rank - b\n amend - c\n search  -d\n - list >60 - e\n list active- f\n exit -s\n");
printf ("Enter the letter corresponding to the desired option\n");
scanf (" %c", &letra); 

switch (letra){ 
case 'a':{ 
registerr();}break;
case 'b':{ 
rank();}break;
case 'c':{ 
amend();}break;
case 'd':{ 
printf ("Do you want to search for name - n or age - i ?\n") ;
scanf (" %c",&aux);
if (aux == 'n')
{
searchname();
}
else {
searchage();
}
}break;
case 'e':{
listar();}break;
case 'f':{ listactive();}break;

default: printf ("exit...");

auxi++;
return 0;
}
}
}
void registerr ()
{
printf ("enter names and ages");
for (i=0; i<50;i++)
{
fflush(stdin);
fgets (pessoas[i].nomes, 100, stdin);
scanf ("%d", &pessoas[i].idade);
}
}
int rank(){
char y[100];
for (i=0;i<=49;i=i+1){
for (int j=i+1;j<=50;j=j+1)
{
if (stricmp(pessoas[i].nomes, pessoas[j].nomes)>0) 

{
strcpy (y, pessoas[i].nomes); // strcpy (destino, origem)
strcpy (pessoas[i].nomes, pessoas[j].nomes);
strcpy (pessoas[j].nomes, y);
}
}
}
for (i=0;i<50;++i) {
printf ("%s", pessoas[i].nomes);
}
return 0;
}

int searchname(){
int a;
printf ("What name do you want to search?");
fflush (stdin);
fgets (pessoas[0].nomesaux, 100, stdin);
i= 0; a=0;
do
{
if (stricmp(pessoas[i].nomes, pessoas[0].nomesaux)==0)
{
a = 1;
}
else
i = i+1;
}while (i<=49 && a==0);
if (a == 1){
printf ("%s found in: %d \n", pessoas[i].nomes, i+1);

}else {
printf ("Name not found\n");
}
return 0;}
int searchage()
{
 int a,b=0;
 i = 0;
printf ("What age do you want to search?\n");
scanf ("%d", &a);

do
{
    if (a==pessoas[i].idade)
    {
        a = 1; 
        b = i;
    }
    else { 
     i++;
}

}while (i<=4 && b==0);
if (a==1)
{
    printf ("found age in : %s \n",  pessoas[b].nomes);
}else {
    printf ("Age not found\n");
}
    return 0;
}

int amend(){
int mud;
printf ("Record number you want to correct");
scanf ("%d", &i);
printf ("What you want to fix in this record?\n");
printf ("1- name, 2 - age");
scanf ("%d", &mud);
switch (mud){
case 1:{

printf ("\nEnter the new name: ");
fflush (stdin);
fgets (pessoas[i].nomes,100,stdin);
printf ("\n changed!\n");}break;
case 2:{
printf ("Enter the new age: ");
scanf ("%d", &pessoas[i].idade);
printf ("\nchanged!\n");}break;

default: printf ("Invalid number!");} return 0;
}


int listar ()
{

    for (i=0;i<50;i++)
    {
        if (pessoas[i].idade >= 60)
        {
            printf ("%s\n", pessoas[i].nomes);
        }
    }

    return 0;
}
int listactive()
{
    for (i=0;i<50;i++)
    {
        if (pessoas[i].idade < 60)
        {
            printf ("%s\n", pessoas[i].nomes);
        }
    }
    
    return 0;
}
