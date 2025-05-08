    #include <stdio.h>
    #include <locale.h>
    #include <stdlib.h>
    int main() {
        int numero, i, tabuada;
    setlocale(LC_ALL,"");
    printf ("----TABUADA---- \n"); // Frase de apresentação
    printf ("Digite o numero que vc quer ver a tabuada: \n");
    scanf  ("%d", &numero);
     for(int i = 0; i <= 10; i++) { // para nao precisar colocar numero um por um
        printf("%d x %d = %d\n",numero,i,tabuada = numero * i); // para exibir tabuada

     }
     return 0;
    }
