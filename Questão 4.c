#include <stdio.h>

int main() {
    int numero;
    do {
        printf("Digite o numero da conta com 4 digitos: ");
        scanf("%d", &numero);
    } while (numero < 1000 || numero > 9999);

    int conta = numero / 10;
    int dvInformado = numero % 10;

    // Inverso da conta
    int a = conta / 100;
    int b = (conta / 10) % 10;
    int c = conta % 10;
    int inverso = c * 100 + b * 10 + a;

    int soma = conta + inverso;

    // cálculo do verificador
    int x = (soma / 100) % 10;
    int y = (soma / 10) % 10;
    int z = soma % 10;
    int verificador = x * 1 + y * 2 + z * 3;
    verificador = verificador % 10;

    printf("Dígito verificador calculado: %d\n", verificador);
    if (dvInformado == verificador)
        printf("Conta valida!\n");
    else
        printf("Conta invalida.\n");

    return 0;
}