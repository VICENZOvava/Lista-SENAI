#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main(){
    setlocale (LC_ALL, "");
    int numero; // declarar variavel
    printf("Digite um número inteiro: ");
    scanf("%d", &numero); // ler numero digitado
    if (numero % 2 == 0) { // se o numero pula de 2 em 2 é par
        printf("O número %d é par.\n", numero);
    } else { // se nao, impar
        printf("O número %d é ímpar.\n", numero);
    }
    return 0;
}