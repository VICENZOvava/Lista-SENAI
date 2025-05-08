
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
    

    typedef struct{ // estrutura struct
        char nome[50];
        float mediafinal;
    }aluno;
    
    int main() {
    //Chamar Biblioteca
    setlocale (LC_ALL, "");
    
    //Declarar váriaveis
    float mediaturma;
    aluno media[5];
    int i;
    
    for (i=0; i<5; i++){     //Pedir nome e notas
        printf("Informe o nome do aluno %d:\n", i+1);
        scanf("%[^\n]", media[i].nome);
        getchar ();
        printf("Informe a média do aluno %d:\n", i+1);
        scanf("%f", &media[i].mediafinal);
        getchar();
        system ("clear");
    }
    
    for (i=0; i<5; i++){     //Somar notas
    mediaturma= mediaturma+ media[i].mediafinal;
    }
    

    printf("Média geral da turma: %.1f", mediaturma/5);     //Informar a média

    return 0;
    }
    
    
    
    
    