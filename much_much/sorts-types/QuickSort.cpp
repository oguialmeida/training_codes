#include <stdio.h>

int numero;
void quick_sort(int vector[numero-1], int inicio, int fim);
int main(){
	printf("Digite a quantidade de numeros desejados: ");
	scanf("%d", &numero);
	int vector[numero], i;
	
	printf("\nDigite os valores:\n");
	for(i = 0; i < numero; i++){
		scanf("%d: ", &vector[i]);
	}
	
	printf("Vetor desordenado:\n");
	for(i = 0; i <= numero-1; i++){
		printf("%d ", vector[i]);
	}
	printf("\n");	
	
	quick_sort(vector, 0, numero-1);
	
	printf("Vetor ordenado:\n");
	for(i = 0; i <= numero-1; i++){
		printf("%d ", vector[i]);
	}
	printf("\n");	
}

void quick_sort(int vector[numero-1], int inicio, int fim){
	
	int pivo, aux, i, j, meio;
	
	i = inicio;
	j = fim;
	
	meio = (int) ((i + j) / 2);
	pivo = vector[meio];
	
	do{
		while (vector[i] < pivo) i = i + 1;
		while (vector[j] > pivo) j = j - 1;
		
		if(i <= j){
			aux = vector[i];
			vector[i] = vector[j];
			vector[j] = aux;
			i = i + 1;
			j = j - 1;
		}
	}while(j > i);
	
	if(inicio < j) quick_sort(vector, inicio, j);
	if(i < fim) quick_sort(vector, i, fim);	

}
