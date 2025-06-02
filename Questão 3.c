#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return *(int*)b - *(int*)a; // decrescente
}

int main() {
    int N, K;
    scanf("%d %d", &N, &K);

    int pontuacoes[N];
    for (int i = 0; i < N; i++)
        scanf("%d", &pontuacoes[i]);

    qsort(pontuacoes, N, sizeof(int), cmp);

    int corte = pontuacoes[K - 1];
    int classificados = 0;

    for (int i = 0; i < N; i++)
        if (pontuacoes[i] >= corte) classificados++;

    printf("%d\n", classificados);
    return 0;
}