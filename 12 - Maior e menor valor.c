#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main() {
    int numeros[10], i, maior, menor;

    printf("Digite 10 numeros:\n");

    for(i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);

        if(i == 0) {
            maior = numeros[i];
            menor = numeros[i];
        } else {
            if(numeros[i] > maior) {
                maior = numeros[i];
            }
            if(numeros[i] < menor) {
                menor = numeros[i];
            }
        }
    }

    printf("\nMaior numero: %d\n", maior);
    printf("Menor numero: %d\n", menor);

    return 0;
}
