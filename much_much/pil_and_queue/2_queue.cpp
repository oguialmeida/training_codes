/*
Implementar uma estrutura de Lista que:

- receba um elemento 

- organize a lista

- imprima a lista ordenada
*/

#include <stdio.h>
#include <stdlib.h>

struct type_list{
 int num;
 struct type_list *next;
}; 
typedef struct type_list list;

int tam;

void inicia(list *lista);
int  menu(void);
void opcao(list *lista, int op);
list *criaNo();
void addFim(list *lista);
void addInicio(list *lista);
void exibe(list *lista);
void libera(list *lista);
void add (list *lista);
list *RemoveInicio(list *lista);
list *RemoveFim(list *lista);
list *remove(list *lista);

int main(void)
{
 list *lista = (list *) malloc(sizeof(list));
 if(!lista){
  printf("Sem memoria disponivel!\n");
  exit(1);
 }else{
 inicia(lista);
 int opt;
 
 do{
  opt=menu();
  opcao(lista,opt);
 }while(opt);

 free(lista);
 return 0;
 }
}

void inicia(list *lista)
{
 lista->next = NULL;
 tam=0;
}

int menu(void)
{
 int opt;

 printf("\n");
 printf("0. Sair\n");
 printf("1. Zerar lista\n");
 printf("2. Exibir lista\n");
 printf("3. Adicionar elemento no inicio\n");
 printf("4. Adicionar elemento no final\n");
 printf("5. Escolher onde inserir\n");
 printf("6. remover do inicio da fila\n");
 printf("7. remover do fim da fila\n");
 printf("8. Escolher onde tirar\n");
 printf("Opcao: "); scanf("%d", &opt);
 
 return opt;
}

void opcao(list *lista, int op)
{
 list *tmp;
 switch(op){
  case 0:
   libera(lista);
   break;
   
  case 1:
   libera(lista);
   inicia(lista);
   break;
  
  case 2:
   exibe(lista);
   break;
  
  case 3:
   addInicio(lista);
   break;  
   
  case 4:
   addFim(lista);
   break;
   
  case 5:
   add(lista);
   break;
  
  case 6:
   tmp= RemoveInicio(lista);
   printf("removido: %3d\n\n", tmp->num);
   break;
   
  case 7:
   tmp= RemoveFim(lista);
   printf("removido: %3d\n\n", tmp->num);
   break;
  
  case 8:
   tmp= remove(lista);
   printf("removido: %3d\n\n", tmp->num);
   break;
  
  default:
   printf("Comando invalido\n\n");
 }
}

int vazia(list *lista)
{
 if(lista->next == NULL)
  return 1;
 else
  return 0;
}

list *aloca()
{
 list *novo=(list *) malloc(sizeof(list));
 if(!novo){
  printf("Sem memoria disponivel!\n");
  exit(1);
 }else{
  printf("Novo elemento: "); scanf("%d", &novo->num);
  return novo;
 }
}


void addFim(list *lista)
{
 list *novo=aloca();
 novo->next = NULL;
 
 if(vazia(lista))
  lista->next=novo;
 else{
  list *tmp = lista->next;
  
  while(tmp->next != NULL)
   tmp = tmp->next;
  
  tmp->next = novo;
 }
 tam++;
}

void addInicio(list *lista)
{
 list *novo=aloca(); 
 list *oldHead = lista->next;
 
 lista->next = novo;
 novo->next = oldHead;
 
 tam++;
}

void exibe(list *lista)
{
 system("clear");
 if(vazia(lista)){
  printf("lista vazia!\n\n");
  return ;
 }
 
 list *tmp;
 tmp = lista->next;
 printf("lista:");
 while( tmp != NULL){
  printf("%5d", tmp->num);
  tmp = tmp->next;
 }
 printf("\n        ");
 int cont;
 for(cont=0 ; cont < tam ; cont++)
  printf("  ^  ");
 printf("\nOrdem:");
 for(cont=0 ; cont < tam ; cont++)
  printf("%5d", cont+1);
 
  
 printf("\n\n");
}

void libera(list *lista)
{
 if(!vazia(lista)){
  list *nextlist,
     *atual;
  
  atual = lista->next;
  while(atual != NULL){
   nextlist = atual->next;
   free(atual);
   atual = nextlist;
  }
 }
}

void add(list *lista)
{
 int pos,
  cont;
 printf("Em que posicao, [de 1 ate %d] voce deseja inserir: ", tam);
 scanf("%d", &pos);
 
 if(pos>0 && pos <= tam){
  if(pos==1)
   addInicio(lista);
  else{
   list *atual = lista->next,
     *anterior=lista; 
   list *novo=aloca();
     
   for(cont=1 ; cont < pos ; cont++){
     anterior=atual;
     atual=atual->next;
   }
   anterior->next=novo;
   novo->next = atual;
   tam++;
  }
   
 }else
  printf("Elemento invalido\n\n");  
}

list *RemoveInicio(list *lista)
{
 if(lista->next == NULL){
  printf("lista ja esta vazia\n");
  return NULL;
 }else{
  list *tmp = lista->next;
  lista->next = tmp->next;
  tam--;
  return tmp;
 }
    
}

list *RemoveFim(list *lista)
{
 if(lista->next == NULL){
  printf("lista ja vazia\n\n");
  return NULL;
 }else{
  list *ultimo = lista->next,
    *penultimo = lista;
    
  while(ultimo->next != NULL){
   penultimo = ultimo;
   ultimo = ultimo->next;
  }
    
  penultimo->next = NULL;
  tam--;
  return ultimo;  
 }
}

list *remove(list *lista)
{
 int opt,
  cont;
 printf("Que posicao, [de 1 ate %d] voce deseja remover: ", tam);
 scanf("%d", &opt);
 
 if(opt>0 && opt <= tam){
  if(opt==1)
   return RemoveInicio(lista);
  else{
   list *atual = lista->next,
     *anterior=lista; 
     
   for(cont=1 ; cont < opt ; cont++){
    anterior=atual;
    atual=atual->next;
   }
   
  anterior->next=atual->next;
  tam--;
  return atual;
  }
   
 }else{
  printf("Elemento invalido\n\n");
  return NULL;
 }
}
