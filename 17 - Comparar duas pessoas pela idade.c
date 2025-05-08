
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct{ // estrutura struct
    char nome[20];
    int idade;
}P;

 int main() {

    
    //Declarar Variaveis 
    int i, id=0;
    P humano [2];
    char *velho;
    
    //Pedir nome e idade
    for  (i=0; i<2;i++){
        printf("Informe o nome da %d pessoa:\n", i+1);
        scanf("%s", humano[i].nome);
        printf("Informe a idade da %d pessoa:\n", i+1);
        scanf("%d", &humano[i].idade);
        getchar ();
        system ("clear");
    }
    

    for (i=0; i<2;i++){     //ver quem e mais velh
        if(humano[i].idade>id){
            velho= humano[i].nome;
        }
    }
    
    
    printf("%s é a pessoa mais velha!\n", velho); // informar pesssoa mais velha
    
    return 0;
 }