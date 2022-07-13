#include <stdio.h>>

main () {

    float n1,n2,s;
    printf("MEDIA ENTRE DOIS NUMEROS\n");

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);

    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    s = (n1 + n2) / 2;

    printf("MEDIA: %f\n", s);

    system("pause");

    return 0;
}
