/*
Implementar uma estrutura de Pilhas que:

1) Receba um elemento 

2) Organize a pilha

3) Imprima a pilha ordenada

*/

#include <stdio.h>
#include <stdlib.h>

struct Pile_type{
 int num;
 struct Pile_type *next;
};
typedef struct Pile_type pile;

int tam;

int menu(void);
void escolha(pile *pilha, int op);
void exibe(pile *pilha);
void libera(pile *pilha);
void push(pile *pilha);
void inicia(pile *pilha);

pile *pop(pile *pilha);


int main(void)
{
 pile *pilha = (pile *) malloc(sizeof(pile));
 if(!pilha){
  printf("Nenhuma memoria disponivel!\n");
  exit(1);
 }else{
 inicia(pilha);
 int opt;

 do{
  opt=menu();
  escolha(pilha,opt);
 }while(opt);

 free(pilha);
 return 0;
 }
}

void inicia(pile *pilha)
{
 pilha->next = NULL;
 tam=0;
}

int menu(void)
{
 int opt;

 printf("0. Sair\n");
 printf("1. Zerar\n");
 printf("2. Mostrar pilha\n");
 printf("3. Adicionar\n");
 printf("4. Excluir\n");
 printf("escolha: "); scanf("%d", &opt);

 return opt;
}

void escolha(pile *pilha, int op)
{
 pile *tmp;
 switch(op){
  case 0:
   libera(pilha);
   break;

  case 1:
   libera(pilha);
   inicia(pilha);
   break;

  case 2:
   exibe(pilha);
   break;

  case 3:
   push(pilha);
   break;

  case 4:
   tmp= pop(pilha);
   if(tmp != NULL)
   printf("Retirado: %3d\n\n", tmp->num);
   break;

  default:
   printf("Comando invalido\n\n");
 }
}

int vazia(pile *pilha)
{
 if(pilha->next == NULL)
  return 1;
 else
  return 0;
}

pile *aloca()
{
 pile *novo=(pile *) malloc(sizeof(pile));
 if(!novo){
  printf("Sem memoria disponivel!\n");
  exit(1);
 }else{
  printf("Novo elemento: "); scanf("%d", &novo->num);
  return novo;
 }
}


void exibe(pile *pilha)
{
 if(vazia(pilha)){
  printf("pilha vazia!\n\n");
  return ;
 }

 pile *tmp;
 tmp = pilha->next;
 printf("pilha:");
 while( tmp != NULL){
  printf("%5d", tmp->num);
  tmp = tmp->next;
 }
 printf("\n        ");
 int count;
 for(count=0 ; count < tam ; count++)
  printf("  ^  ");
 printf("\nOrdem:");
 for(count=0 ; count < tam ; count++)
  printf("%5d", count+1);


 printf("\n\n");
}

void libera(pile *pilha)
{
 if(!vazia(pilha)){
  pile *nextpile,
     *atual;

  atual = pilha->next;
  while(atual != NULL){
   nextpile = atual->next;
   free(atual);
   atual = nextpile;
  }
 }
}

void push(pile *pilha)
{
 pile *novo=aloca();
 novo->next = NULL;

 if(vazia(pilha))
  pilha->next=novo;
 else{
  pile *tmp = pilha->next;

  while(tmp->next != NULL)
   tmp = tmp->next;

  tmp->next = novo;
 }
 tam++;
}


pile *pop(pile *pilha)
{
 if(pilha->next == NULL){
  printf("pilha vazia\n\n");
  return NULL;
 }else{
  pile *ultimo = pilha->next,
              *penultimo = pilha;

  while(ultimo->next != NULL){
   penultimo = ultimo;
   ultimo = ultimo->next;
  }

  penultimo->next = NULL;
  tam--;
  return ultimo;
 }
}
