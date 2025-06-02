#include <stdio.h>

int main() {
    float valor, taxa, depreciado, valorFinal;

    printf("Informe o valor do bem: ");
    scanf("%f", &valor);

    printf("Informe a taxa de depreciacao (em %%): ");
    scanf("%f", &taxa);

    depreciado = valor * (taxa / 100.0);
    valorFinal = valor - depreciado;

    printf("Valor depreciado: %.2f\n", depreciado);
    printf("Valor final do bem: %.2f\n", valorFinal);

    return 0;
}