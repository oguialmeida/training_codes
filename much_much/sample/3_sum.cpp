#include <stdio.h>

int main (void) {
    
    int n1,n2,s;

    printf("Digite um numero: ");
    scanf("%d", &n1);

    printf("Digite outro numero: ");
    scanf("%d", &n2);

    s = n1 + n2;
    printf("o valor da soma e: %d\n",s);   

    return 0; 
}
