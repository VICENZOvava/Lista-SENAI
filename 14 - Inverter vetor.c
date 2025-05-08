#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    int vetor[5];
    int i;

    printf("Digite 5 números:\n"); // pedindo numeros do vetor
    for (i = 0; i < 5; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nVetor invertido:\n"); // mostrando vetor final inverso
    for (i = 4; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}