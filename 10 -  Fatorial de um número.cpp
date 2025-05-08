#include <stdio.h>
#include <locale.h>
int main() {
	int numero, F = 1, i ; // declarar variavel
	printf ("digite um numero inteiro \n"); // solicitar resposta do usuario
	scanf  ("%d", &numero); // ler resposta
   for (int i = 1; i <= numero; i++){ // calculo para fatorar
	    F *= i;  // calculo para fatorar
	}
 printf("O fatorial de %d é %d\n", numero, F); // exibir resultado final

 return 0;

}
	
	
