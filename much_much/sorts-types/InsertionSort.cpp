#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<time.h>
#define TAM 1000 //define uma constante

void sort(int *uai, int size);
void imprimirVetor(int vetor2[], int num);

int tamanho;
int vetor[TAM], vetor2[TAM];
int x, y, i, j, aux;
static int ntrocas = 0; //variavel de contagem de trocas

int main()
{
  
  printf("VALORES ALEATORIOS:\n\n"); 
  printf("Digite o valor de numeros aleatorios desejado: ");
  scanf("%d", &tamanho); //recebe a quantidade de valores desejados
  printf("\n");
  
  srand(time(NULL)); //necessaria para que a funcao rand funcione corretamente
  
  for (i = 0; i < tamanho; i++)
  {	
      vetor[i] = rand() % 1000;	
      
      printf("%d ", vetor[i]);	

      vetor2[i] = vetor[i];  //clona o vetor para que seja ordenado
      
  }
  
  printf("\n\nORDENADOS: ");
  printf("\n\n");
  
  imprimirVetor(vetor2, tamanho); //imprime a função
  
  getch();
  return 0;
}

void imprimirVetor(int vetor2[], int tamanho) { //responsavel por apresentar o vetor clone
	
		for (int i = 0; i < tamanho; i++) {
			sort(vetor2,tamanho); //chama a funcao de comparacao para o vetor clone
			printf("%d ", vetor2[i]);
	    }
	printf("\n\n");
	printf("\nNUMERO DE TROCAS: %d", ntrocas);
}

void sort(int *uai, int size){ //realiza comparacoes e coloca numeros em ordem
	
	for(x = 1; x < size; x++){
		aux = uai[x];
		
		for(y = x - 1; y >= 0 && uai[y] > aux; y--){ //vai deixando os elementos mais a esquerda ordenados
			uai[y+1] = uai[y];
			
			ntrocas++; //vai receber mais 1 cada vez esse trecho rodar
		}
		uai[y+1] = aux;
    }
}
