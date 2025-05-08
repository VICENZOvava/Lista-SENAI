#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main() {
    int numeros[10], i;

    printf("Digite 10 numeros:\n");

    for(i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
}
   for(i = 0; i < 10; i++) {
    if (numeros[i] % 2 == 0) {
    printf("Os números %d sao pares.\n", numeros[i]);
    }
}
    return 0;
}
