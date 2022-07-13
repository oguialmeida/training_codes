#include <stdio.h>

int main (){

    float n1,n2;
    char oper;

    printf("Digite um numero: ");
    scanf("%f",&n1);

    printf("Digite outro numero: ");
    scanf("%f",&n2);

    printf("Digite qual operacao deseja realizar?\n");
    printf("[x] [/] [-] [+]: ");
    scanf("%s",&oper);

    if (oper == 'x') 
     printf("%.2f\n\n",n1 * n2); 
    else 
      if (oper == '/')
      printf("%.2f\n\n",n1 / n2);
      else
        if (oper == '+')
        printf("%.2f\n\n",n1 + n2);
        else
          if (oper == '-')
          printf("%.2f\n\n",n1 - n2); 
          else 
          printf("Operacao invalida!");

    return 0;      
}
