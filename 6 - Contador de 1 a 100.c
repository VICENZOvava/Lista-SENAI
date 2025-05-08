    #include <stdio.h>
    #include <locale.h>
    #include <stdlib.h>
    int main() {
        int i;
    setlocale(LC_ALL,"");
    printf ("----CONTADOR 1 A 100---- \n"); // Frase de apresentação
     for(int i = 1; i <= 100; i++) { // para nao precisar colocar numero um por um
        printf("%d\n", i);
     }
     return 0;
    }
