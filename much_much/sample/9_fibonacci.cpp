//Implementar o problema da sequ�ncia de Fibonacci de forma recursiva
#include<stdio.h>
#include<locale.h>
 
int Fibonacci(int);
 
//fun��o principal que chama a fun��o "Fibonacci" para a implementa��o do c�lculo
int main()
{ 
   setlocale(LC_ALL, "Portuguese_Brazil");
   
   printf("Digite o quantidade de membros que deseja na sequ�ncia: ");	
   int n, i = 0, c;

   scanf("%d",&n);
 
   printf("Sequ�ncia de Fibonacci\n");
 
   //quantidade de vezes definida por n
   for ( c = 1 ; c <= n ; c++ )
   {
      printf("%d\n", Fibonacci(i));
      i++; 
   }
 
   return 0;
}
 //fun��o que cont�m o c�lculo
int Fibonacci(int n)
{
   if ( n == 0 )
      return 0;
   else if ( n == 1 )
      return 1;
   else
      return ( Fibonacci(n-1) + Fibonacci(n-2) );
} 
