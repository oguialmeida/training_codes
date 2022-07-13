#include <stdio.h>

int main (){

   int n1=0,i=0; 

   printf("TABOADA\n\n");

   printf("Digite o numero desjado: ");
   scanf("%i",&n1);

       while (i <= 9) {
        i++;
        printf ("%i x %i = %i\n", n1,i, n1*i);     
    }
   return 0;
}
