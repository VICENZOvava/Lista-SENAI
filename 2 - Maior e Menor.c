#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main(){
    setlocale (LC_ALL, "");
    int numero1, numero2; // declarar variavel

    printf("Digite o primeiro número: "); // digitar o primeiro numero pedido
    scanf("%d", &numero1); // armazenar primeiro numero 
    printf("Digite o segundo número: "); // digitar segundo numero pedido
    scanf("%d", &numero2); // armazenar segundo numero
    if (numero1 >> numero2) { // se o numero 1 ser maior que o numero 2
        printf("O número 1, %d é maior que o segundo.\n", numero1); 
    } else { // se numero 2 ser maior que numero 1
        printf("O número 2, %d é maior que o primeiro.\n", numero2);
    }
    return 0;
}
