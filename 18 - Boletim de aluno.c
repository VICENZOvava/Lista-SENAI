#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
    
    typedef struct{ // declarar variaveis
        char nome[50];
        float nota[3];
    }aluno;
    
    int main() {

    

    float media; // mais variaveis
    aluno notas;
    int i;
    char *aprovacao;
    

    printf("Informe o nome do aluno:\n");     //Pedir nome do aluno
    scanf("%[^\n]", notas.nome);
    getchar ();
    system("clear");
    

    for (i=0; i<3; i++){     //pedir as notas
        printf("Informe a nota %d do aluno:\n", i+1);
        scanf("%f", &notas.nota[i]);
        getchar();
        system ("clear");
    }
    

    for (i=0; i<3; i++){     //somar as notas e calcular a média
    media= (media+ notas.nota[i])/3;
    }
    
 
    if(media>=7){    //Verificar se foi aprovado se media maior q 7
        aprovacao= "Aprovado!!";
    }
    else{
        aprovacao= "Reprovado!!";
    }
    

    printf("Média: %.1f\n", media);     //Informar a média e status
    printf("Status:%s\n", aprovacao);
    

    return 0;
    }
    
    
    
    
    