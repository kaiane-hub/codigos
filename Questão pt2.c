#ifndef MYFUNCTION_H
#define MYFUNCTION_H

#include <stdio.h>

// Estrutura para retornar dois valores
typedef struct {
    int estrelasAtacadas;
    int carneirosRestantes;
} Resultado;

// Função principal da lógica
Resultado calcularJornada(int n, int carneiros[]) {
    int visitadas[n];
    for (int i = 0; i < n; i++) visitadas[i] = 0;

    int i = 0;
    while (i >= 0 && i < n) {
        if (carneiros[i] > 0) {
            carneiros[i]--;
            visitadas[i] = 1;
            if (carneiros[i] % 2 == 0)
                i--;
            else
                i++;
        } else {
            break;
        }
    }

    Resultado r = {0, 0};
    for (int i = 0; i < n; i++) {
        if (visitadas[i]) r.estrelasAtacadas++;
        r.carneirosRestantes += carneiros[i];
    }
    return r;
}

// Função de utilidade para imprimir o resultado
void imprimirResultado(Resultado r) {
    printf("Estrelas atacadas: %d\n", r.estrelasAtacadas);
    printf("Carneiros não roubados: %d\n", r.carneirosRestantes);
}

#endif

