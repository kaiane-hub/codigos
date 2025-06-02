#include <stdio.h>

int main() {
    int A1, A2, A3;
    scanf("%d %d %d", &A1, &A2, &A3);

    int tempo1 = A2 * 2 + A3 * 4;
    int tempo2 = A1 * 2 + A3 * 2;
    int tempo3 = A1 * 4 + A2 * 2;

    int menor = tempo1;
    if (tempo2 < menor) menor = tempo2;
    if (tempo3 < menor) menor = tempo3;

    printf("%d\n", menor);
    return 0;
}