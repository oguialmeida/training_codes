#include <stdio.h>

int main (){

  int i=1;

  do     //a diferença para o while normal é que executa pelo menos uma vez.
  {
    printf("%i\n",i);
    i = i + 1;
  } while (i <= 5);
  
}
