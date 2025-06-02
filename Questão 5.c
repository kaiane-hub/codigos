#include <stdio.h>

int main() {
    int qtd;
    float valor, total = 0;
    int itens = 0;

    while (1) {
        printf("Quantidade: ");
        scanf("%d", &qtd);
        if (qtd <= 0) break;

        do {
            printf("Valor unitario: ");
            scanf("%f", &valor);
        } while (valor <= 0);

        total += qtd * valor;
        itens += qtd;
    }

    printf("Valor total: R$ %.2f\n", total);
    printf("Media por item: R$ %.2f\n", total / itens);

    int reais = (int)total;
    int centavos = (int)((total - reais) * 100);
    printf("Reais: %d, Centavos: %d\n", reais, centavos);

    int notas[] = {100, 50, 20, 10, 5, 2, 1};
    for (int i = 0; i < 7; i++) {
        int qtdNota = reais / notas[i];
        reais %= notas[i];
        if (qtdNota > 0)
            printf("%d nota(s) de R$ %d\n", qtdNota, notas[i]);
    }

    return 0;
}