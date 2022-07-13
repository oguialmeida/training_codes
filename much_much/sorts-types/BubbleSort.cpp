#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM  100 //define o tamanho do vetor
//prototipos da funcao
void bubbleSort (int v[], int num); 
void imprimirVetor(int v[], int tamanho);
//variaveis globais
int vetor[TAM], vetor2[TAM], tamanho,i,aux;
static int change = 0;

int main () {
    
    printf("\nDigite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    printf("\n");
     
    srand(time(NULL)); //responsavel por fazer a funcao rand funcionar

    printf("FORA DE ORDEM:\n\n");

    for (i = 0; i < tamanho; i++)
    {
        vetor[i] = rand() % 1000; //escolhe um numero aleatorio entre 1 e 1000
        printf("%d ", vetor[i]);

        vetor2[i] = vetor[i]; //clona o vetor inicial
    }

    printf("\n\nORDENADOS: ");
    printf("\n\n");

    imprimirVetor(vetor2, tamanho); //imprime o vetor clone modificado

 return 0;   
}

void bubbleSort (int v[], int num){ //funcao responsavel pela ordenacao
     for (int i=1; i <= num-1; i++){ 

         for ( int j=0; j< num-1; j++){  //adiciona -1 a piscao para evitar o 0 

             if (v[j] > v[j+1]) { //ordena o vetor
                 //compara as posicoes
                 aux = v[j+1];
                 v[j+1]= v[j];
                 v[j] = aux;
                 change++; //conta o numero de trocas realizadas

             }
         }         
     }
}

void imprimirVetor(int v[], int tamanho) { //responsavel por apresentar o vetor clone
	
		for (int i = 0; i < tamanho; i++) {
			bubbleSort(vetor2,tamanho); //chama a funcao de comparacao para o vetor clone
			printf("%d ", vetor2[i]);
	    }
	printf("\n");
    printf("\nNUMERO DE TROCAS: %d\n\n", change);
}