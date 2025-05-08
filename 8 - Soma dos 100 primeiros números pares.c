    #include <stdio.h>
    #include <locale.h>
    #include <stdlib.h>
    int main() {
        int i, soma = 0;
    setlocale(LC_ALL,"");
    printf ("----Soma dos 100 primeiros números pares---- \n"); // Frase de apresentação

     for(int i = 0; i <= 200; i++) { // para nao precisar colocar numero um por um
     
             if (i % 2 == 0) { // verifica se e par
            soma += i; // soma os numeros pares
        }
    }

    printf("A soma dos 100 primeiros numeros pares é: %d\n", soma);

     return 0;
    }
