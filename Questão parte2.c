#include <stdio.h>
#include "myfunction.h"

int main() {
    int n;
    printf("Quantidade de fazendas: ");
    scanf("%d", &n);

    int carneiros[n];
    printf("Quantidade de carneiros em cada fazenda:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &carneiros[i]);
    }

    processaJornada(n, carneiros);

    return 0;
}



