//Implementar o problema da sequência de Fibonacci de forma recursiva
#include<stdio.h>
#include<locale.h>
 
int Fibonacci(int);
 
//função principal que chama a função "Fibonacci" para a implementação do cálculo
int main()
{ 
   setlocale(LC_ALL, "Portuguese_Brazil");
   
   printf("Digite o quantidade de membros que deseja na sequência: ");	
   int n, i = 0, c;

   scanf("%d",&n);
 
   printf("Sequência de Fibonacci\n");
 
   //quantidade de vezes definida por n
   for ( c = 1 ; c <= n ; c++ )
   {
      printf("%d\n", Fibonacci(i));
      i++; 
   }
 
   return 0;
}
 //função que contém o cálculo
int Fibonacci(int n)
{
   if ( n == 0 )
      return 0;
   else if ( n == 1 )
      return 1;
   else
      return ( Fibonacci(n-1) + Fibonacci(n-2) );
} 
