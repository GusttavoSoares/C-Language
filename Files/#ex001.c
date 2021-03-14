/*The registration of an address book,names, age and telephone numbers of 5 people, complements an appropriate registration structure in C, that performs the following tasks: 
A - registration of information: name, address, telephone number and age. B - age research. C - alphabetical classification. 
D  - alteration of a record that occurred with an error. E - exit the program. */

#include <stdio.h> // biblioteca padrao de entrada e saida
#include <unistd.h> // biblioteca para sleep
#include <string.h> // usada para controlar as strings
#include <stdlib.h> // clear

int i, pesquisar() , classificar() , alterar() , apagar(), cadastrar();

struct agenda_cadastro 
{
    char nomes[100], enderecos[100],aux[100], email[100], nomeaux[100];
    int  telefones;
};
struct agenda_cadastro pessoas[5]; // cadastro de 5 pessoas

int main (){      
char input, opc;

while (input != 'e'){ // enquanto a variavel input for diferente de 'e' (que determinei para saida do codigo) o programa continua funcionando

printf ("..........MENU DA AGENDA..........\n"); //Exibicao das opcoes
printf ("\n Cadastro - a\n Pesquisa de registro por nomes - b\n Classificacao alfabetica - c\n Alteracao de registro digitado com erro - d\n Sair do Menu - e\n");
printf ("Digite a letra correspondente a opcao desejada\n");
scanf (" %c", &input); //  importante deixar o espaco depois das aspas, caso contrario vai exibir duplicado

switch (input){ //CASES 
case 'a':{ // Cadastro
 cadastrar();}break;

case 'b':{ // Pesquisa de nome
pesquisar();}break;

case 'c':{ // classificacao alfabetica 
classificar();}break;

case 'd':{ // alteracao de registro
        printf ("\nVoce deseja alterar ou deletar?\n Para alterar digite 'A'\n Para deletar digite 'D' ");
        scanf (" %c", &opc);
        if (opc == 'A') {
            alterar();}
        else if (opc == 'D'){
            apagar();}
            else {
            printf ("Letra invalida!");} }break;
    
case 'e':{ // sair 
input = 'e';}break;

default: printf ("-----------LETRA INVALIDA!-----------\n");  }} return 0;}

int cadastrar(){
for (i=0;i<5;++i){
                            printf ("\n--------  Cadastro %d------- \n", i);
                            printf ("Nome da pessoa:..........");
                            fflush (stdin);
                            fgets (pessoas[i].nomes, 100, stdin);
                            strcpy (pessoas[i].aux, pessoas[i].nomes); // Copiei a string nome na aux porque na  ordenacao em ordem alfabetica elas vao perder a definicao  na ordem certa do registro
                            
                            printf ("Endereco:.........."); 
                            fflush (stdin);
                            fgets (pessoas[i].enderecos, 100, stdin); 
    
                            printf ("Email:..........");
                            fflush (stdin);
                            fgets (pessoas[i].email, 100, stdin);

                            printf ("Telefone:..........");
                            fflush (stdin);
                            scanf ("%d", &pessoas[i].telefones); 
                            sleep (1);
                            system ("cls");} // Usa-se cls para windows e clear para linux                              
 return 0;}  

int pesquisar(){
    int a;
    printf ("Qual nome deseja pesquisar?");
    fflush (stdin);
    fgets (pessoas[0].nomeaux, 100, stdin);
    i= 0; a=0;                         
    do  
    {
        if (stricmp(pessoas[i].nomes, pessoas[0].nomeaux)==0)   
        {
         a = 1; 
        }
        else 
         i = i+1;
            }while (i<=4 && a==0);
            if (a == 1){
                printf ("%s encontrada(o) em : %d \n",  pessoas[i].nomes, i+1);
                sleep (1);
                system ("cls");
            }else {
    printf ("Nome nao localizado\n");
    sleep (3);
    system ("cls");
            }
return 0;}

int classificar(){
    char x[100];
    for (i=0;i<=3;i=i+1){
     for (int j=i+1;j<=4;j=j+1)
        {
        if (stricmp(pessoas[i].nomes,pessoas[j].nomes)>0)  // stricmp compara sem distinguir maiÃºscula e minÃºscula 
         {
            strcpy (x, pessoas[i].nomes);    // strcpy (destino, origem) 
            strcpy (pessoas[i].nomes, pessoas[j].nomes); 
            strcpy (pessoas[j].nomes, x);
         }
             }
                  }
                    for (i=0;i<5;++i) {
                        printf ("%s",pessoas[i].nomes);
                    }
                    sleep (3);
                    system ("cls");
                    return 0;}
int alterar(){
int mud;
for (i=0;i<5;i++){
    printf ("\n-------Registro %d---------\n", i);
    printf ("Nome: %s", pessoas[i].aux);
    }
    printf ("Numero do registro que deseja alterar");
    scanf ("%d", &i);
    printf ("O que deseja alterar nesse registro?\n");
    printf ("1- nome, 2 - email, 3 - endereco, 4 - telefone");
    scanf ("%d", &mud);
    switch (mud){
    case 1:{
    printf ("\nDigite o novo nome: ");
    fflush (stdin);
    fgets (pessoas[i].nomes,100,stdin);
    printf ("\n Alterado com sucesso\n");}break;

    case 2:{
    printf ("Digite o novo email: ");
    scanf ("%s", &pessoas[i].email);
    printf ("\n Alterado com sucesso\n");}break;

    case 3:{
        printf ("Digite o novo endereco: ");
        fflush (stdin);
        fgets (pessoas[i].enderecos,100, stdin);
        printf ("\n Alterado com sucesso\n");}break;
        
    case 4:{
    printf ("Digite o novo telefone: ");
    scanf ("%d",&pessoas[i].telefones);
    printf ("\n Alterado com sucesso\n");}break;

    default: printf ("Numero invalido!");} return 0;}

int apagar(){
    int del;
    for (i=0;i<5;i++){
        printf ("\n-------Registro %d---------\n", i);
        printf ("Nome: %s", pessoas[i].aux);}
        
        printf ("Numero do registro que deseja apagar");
        scanf ("%d", &i);
        printf ("Qual informacao do registro deseja apagar?\n  ");
        printf ("1- Nome\n 2 - Endereco\n  3 - Email\n 4 - Telefone");
        printf ("Digite o numero correspondente: ");
        scanf ("%d", &del);
        switch (del){

            case 1: {
            strcpy (pessoas[i].nomes," ");
            printf ("apagado com sucesso\n");}break;
    
            case 2:{
            strcpy (pessoas[i].enderecos, " ");
            printf ("apagado com sucesso\n");}break;

            case 3:{
            strcpy (pessoas[i].email, " ");
            printf ("apagado com sucesso\n");}break;
        
            case 4:{
            pessoas[i].telefones = 0;
            printf ("apagado com sucesso\n");}break;

            default: 
            printf ("Numero invalido!\n");}return 0;}


