#include <stdio.h> // biblioteca padrÃ£o de entrada e saida
#include <locale.h> // vai ser usada para conseguir colocar acentos nas palavras
#include <string.h> // usada para controlar as strings

int main (){
setlocale  ( LC_ALL ,  "Portuguese_Brazil" ); // Escrever palavras conforme a lÃ­ngua portuguesa
    
int i,j,a,pesq,mud, del;  
char input,x[100],opc;
struct agenda_cadastro 
{
    
   
    char nomes[100], enderecos[100],aux[100];
    int idades, telefones;
};

struct agenda_cadastro pessoas[5]; // cadastro de 5 pessoas

while (input != 'e'){ // enquanto a variÃ¡vel input for diferente de 'e' (que determinei para saÃ­da do cÃ³digo) o programa continuarÃ¡ funcionando

// ExibiÃ§Ã£o das opÃ§Ãµes
printf ("..........MENU DA AGENDA..........");
printf ("Cadastro - a\n Pesquisa de registro por idade - b\n ClassificaÃ§Ã£o alfabetica - c\n AlteraÃ§Ã£o de registro digitado com erro - d\n Sair do Menu - e\n");
printf ("Digite a letra correspondente a opcao desejada");
scanf (" %c", &input); // Ã© importante deixar o espaÃ§o depois das aspas, caso o contrÃ¡rio apareÃ§a duplicaÃ§Ã£o


//CASES 
switch (input)
{
    case 'a': // case do cadastro
    {
        for (i=0;i<5;++i){
                            printf ("\n-------- Agenda de Cadastro -------- ");
                            printf ("Nome da pessoa:..........");
                            fflush (stdin);
                            fgets (pessoas[i].nomes, 100, stdin);
                            strcpy (pessoas[i].aux, pessoas[i].nomes); // Copiei a string nome na aux porque na  ordenaÃ§Ã£o em ordem alfabetica elas vÃ£o perder a definiÃ§Ã£o na ordem certa do registro
                            
                            printf ("Endereï¿½o:.........."); 
                            fflush (stdin);
                            fgets (pessoas[i].enderecos, 100, stdin); 
    
                            printf ("Idade:..........");
                            fflush (stdin);
                            scanf ("%d", &pessoas[i].idades);

                            printf ("Telefone:..........");
                            fflush (stdin);
                            scanf ("%d", &pessoas[i].telefones); 
        }                                                           
        break;
                             // Pesquisa de idade  
                            case 'b': 
                            {
                               
                                    
                                        printf ("Qual idade deseja pesquisar?");
                                        scanf ("%d", &pesq); 
                                        i= 0;
                                        a = 0;
                                        
                                        do  
                                    {
                                        if  (pessoas[i].idades == pesq)   //
                                        {
                                            a = 1; 
                                            
                                        }
                                         else 
                                           i = i+1;
                                    }while (i<=4 && a==0);
                                    if (a == 1){
                                        printf ("Idade encontrada no nome: %d, correspondendo a %s\n", i++, pessoas[i].nomes);
                                    }else 
                                    	printf ("Idade nÃ£o localizada nos nomes\n");
                            }

                            break;
                                                                         // classificaÃ§Ã£o alfabetica 
                                                                            case 'c':
                                                                            {
                                                                                for (i=0;i<=3;i=i+1){
                                                                                for (j=i+1;j<=4;j=j+1)
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
                                                                            
                                                                            break;}
                                                                                                         // alteraÃ§Ã£o de registro
                                                                                                             case 'd':
                                                                                                             {
                                                                                                                 printf ("VocÃª deseja alterar ou deletar?\n Para alterar digite 'A'\n Para deletar digite 'D' ");
                                                                                                                 scanf (" %c", &opc);
                                                                                                                    if (opc == 'A') {
                                                                                                                 
                                                                                                                 for (i=0;i<5;i++){
                                                                                                                     printf ("\n-------Registro %d---------\n", i);
                                                                                                                     printf ("Nome: %c", pessoas[i].aux);
                                                                                                                     
                                                                                                                 }
                                                                                                                 printf ("NÃºmero do registro que deseja alterar");
                                                                                                                 scanf ("%d", &i);
                                                                                                                 printf ("O que deseja alterar nesse registro?\n");
                                                                                                                 printf ("1- nome, 2 - idade, 3 - endereÃ§o, 4 - telefone");
                                                                                                                 scanf ("%d", &mud);
                                                                                                                 switch (mud)
                                                                                                                 {
                                                                                                                     case 1:
                                                                                                                     {
                                                                                                                         printf ("\nDigite o novo nome: ");
                                                                                                                         fflush (stdin);
                                                                                                                         fgets (pessoas[i].nomes,100,stdin);
                                                                                                                         printf ("\n Alterado com sucesso");
                                                                                                                     }
                                                                                                                     break;
                                                                                                                     case 2:
                                                                                                                     {
                                                                                                                         printf ("Digite a nova idade: ");
                                                                                                                         scanf ("%d", pessoas[i].idades);
                                                                                                                         printf ("\n Alterado com sucesso");
                                                                                                                     }
                                                                                                                     break;
                                                                                                                     case 3:
                                                                                                                     {
                                                                                                                         printf ("Digite o novo endereÃ§o: ");
                                                                                                                         fflush (stdin);
                                                                                                                         fgets (pessoas[i].enderecos,100, stdin);
                                                                                                                         printf ("\n Alterado com sucesso");
                                                                                                                     }
                                                                                                                     break;
                                                                                                                     case 4:
                                                                                                                     {
                                                                                                                         printf ("Digite o novo telefone: ");
                                                                                                                         scanf ("%d",&pessoas[i].telefones);
                                                                                                                         printf ("\n Alterado com sucesso");
                                                                                                                     }
                                                                                                                     break;
                                                                                                                     default: ("NÃºmero invÃ¡lido!");
                                                                                                                 }
                                                                                                             }
                                                                                                                   else if (opc == 'D')
                                                                                                                   {
                                                                                                                       for (i=0;i<5;i++){
                                                                                                                        printf ("\n-------Registro %d---------\n", i);
                                                                                                                        printf ("Nome: %c", pessoas[i].aux);
                                                                                                                       }
                                                                                                                       printf ("NÃºmero do registro que deseja apagar");
                                                                                                                       scanf ("%d", &i);
                                                                                                                       printf ("Qual informaÃ§Ã£o do registro deseja apagar?\n  ");
                                                                                                                       printf ("1- Nome\n 2 - EndereÃ§o\n  3 - Idade\n 4 - Telefone");
                                                                                                                       printf ("Digite o nÃºmero correspondente: ");
                                                                                                                       scanf ("%d", &del);
                                                                                                                       switch (del)
                                                                                                                       {
                                                                                                                           case 1: {
                                                                                                                           strcpy (pessoas[i].nomes," ");
                                                                                                                           printf ("apagado com sucesso");
                                                                                                                       } 
                                                                                                                       break;
                                                                                                                       
                                                                                                                       case 2:
                                                                                                                       {
                                                                                                                       strcpy (pessoas[i].enderecos, " ");
                                                                                                                       printf ("apagado com sucesso");
                                                                                                                       }
                                                                                                                       break;

                                                                                                                       case 3:
                                                                                                                       {
                                                                                                                       pessoas[i].idades = 0;
                                                                                                                       printf ("apagado com sucesso");
                                                                                                                       }
                                                                                                                       break;
                                                                                                                       case 4:
                                                                                                                       {
                                                                                                                           pessoas[i].telefones = 0;
                                                                                                                           printf ("apagado com sucesso");
                                                                                                                       }
                                                                                                                       break;

                                                                                                                       default: 
                                                                                                                       printf ("NÃºmero invÃ¡lido!");
                                                                                                                       }
                                                                                                                    
                                                                                                                   }else {
                                                                                                                       printf ("Letra invÃ¡lida!");
                                                                                                                   }}
                                                                                                             break;

                                                                                            // sair - check
                                                                                             case 'e':
                                                                                            {
                                                                                            input = 'e';
                                                                                            }  
                                                                                             break;   
                                                                                            default: 
                                                                                            printf ("-----------LETRA INVÃLIDA!-----------\n"); }                 
} // final de todos os cases
} // final do while
return 0;
}

/* Muitas variaveis, da para diminuir*/