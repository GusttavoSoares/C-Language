/* Develop a program that controls the bimonthly grades of 20 students in a classroom and that calculates the average of each student, and the student who obtains an average> = 7.0 will be considered approved. The program in question must perform the following routines:
a-register the 20 students and their grades 
b-classify the registered students 
c-correct students and / or grades that have been registered with errors
d-search students by name 
e-list approved students 
f-list failed students  
*/

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
int i, classificar(), pesquisar(), alterar(), aprovado(), reprovado(), apagar(
);
void cadastrar();
struct cadastro
{
char nomes[100], aux[100], nomeaux[100];
float nota1, nota2, media;
};
struct cadastro alunos [20];
int main (){
char input, opc;
while (input != 'S'){
printf ("..........SCHEDULE MENU..........\n");
printf ("\n Register - a\n Classify - b\n Chance - c\n Search by name- d\n Listar approved - e\n List failed - f\n");
printf ("Enter the letter corresponding to the correct option\n");
scanf (" %c", &input);
switch (input){
case 'a':{
cadastrar();}break;
case 'b':{
classificar();}break;
case 'c':{
printf ("\nDo you want to change or delete it?\n To change type 'A'\nTo delete type 'D' ");
scanf (" %c", &opc);
if (opc == 'A') {
alterar();}
else if (opc == 'D'){

apagar();}
else {
printf ("invalid letter!");} }break;
case 'd': {
pesquisar();}break;
case 'e':{
aprovado();}break;
case 'f':{
reprovado();}break;
default: printf ("invalid letter!");
return 0;
}}}
void cadastrar()
{
printf ("enter students' names and grades\n");
for (i=0; i<20; i++){
printf ("\nAluno %i\n", i);
printf ("student's name:......");
fflush (stdin);
fgets (alunos[i].nomes, 100, stdin);
strcpy (alunos[i].aux, alunos[i].nomes);
printf ("1 student's grade:......");
scanf ("%f", &alunos[i].nota1);
printf ("2 student's grade:......");
scanf ("%f", &alunos[i].nota2);
alunos[i].media = (alunos[i].nota1+alunos[i].nota2)/2;
}
}
int classificar(){
char x[100];
for (i=0;i<=18;i=i+1){
for (int j=i+1;j<=19;j=j+1)
{
if (stricmp(alunos[i].nomes, alunos[j].nomes)>0) // stricmp compara sem distinguir maiÃoscula e minÃoscula
{
strcpy (x, alunos[i].nomes); // strcpy (destino, origem)
strcpy (alunos[i].nomes, alunos[j].nomes);
strcpy (alunos[j].nomes, x);
}
}
}
for (i=0;i<20;++i) {
printf ("%s", alunos[i].nomes);
}
sleep(3);
return 0;}

int pesquisar(){
int a;
printf ("What name do you want to search for?");
fflush (stdin);
fgets (alunos[0].nomeaux, 100, stdin);
i= 0; a=0;
do
{
if (stricmp(alunos[i].nomes, alunos[0].nomeaux)==0)
{
a = 1;
}
else
i = i+1;
}while (i<=19 && a==0);
if (a == 1){
printf ("%s found in  : %d \n", alunos[i].nomes, i+1);
sleep (1);
system ("cls");
}else {
printf ("Name not found\n");
sleep (3);
system ("cls");
}
return 0;}
int alterar(){
int mud;
for (i=0;i<20;i++){
printf ("\n-------Register %d---------\n", i);
printf ("Nome: %s", alunos[i].aux);
}
printf ("Record number you want to change");
scanf ("%d", &i);
printf ("What you want to change in this record?\n");
printf ("1- name, 2 - grade");
scanf ("%d", &mud);
switch (mud){
case 1:{
printf ("\nEnter the new name: ");
fflush (stdin);
fgets (alunos[i].nomes,100,stdin);
printf ("\n Successfully changed\n");}break;
case 2:{
printf ("Enter 1 new note: ");
scanf ("%f", &alunos[i].nota1);
printf ("Enter 2 new note: ");
scanf ("%f", &alunos[i].nota2);

alunos[i].media = (alunos[i].nota1+alunos[i].nota2)/2;
printf ("\n Successfully changed\n");}break;
default: printf ("invalid number!");} return 0;}
int apagar(){
int del;
for (i=0;i<20;i++){
printf ("\n-------Register %d---------\n", i);
printf ("Name: %s", alunos[i].aux);}
printf ("Number of the record you want to delete");
scanf ("%d", &i);
printf ("What registry information do you want to delete?\n ");
printf ("1- Nome\n 2 - Nota\n ");
printf ("Enter the number: ");
scanf ("%d", &del);
switch (del){
case 1: {
strcpy (alunos[i].nomes," ");
printf ("asuccessfully paid\n");}break;
case 2:{
alunos[i].media = 0;
printf ("asuccessfully paid\n");}break;
default:
printf ("invalid number!\n");}return 0;}

int aprovado(){
for (i=0;i<20;i++){
if (alunos[i].media >= 7.0){
printf ("\nstudent's grade %s is equal to %.2f, therefore approved!\n",alunos[i].nomes, alunos[i].media);
}
}
return 0;
}
int reprovado(){
for (i=0;i<20;i++){
if (alunos[i].media < 7.0){
printf ("\nstudent's grade %s is equal to %.2f, therefore disapproved!\n", alunos[i].nomes, alunos[i].media);
}
}
return 0;

}
