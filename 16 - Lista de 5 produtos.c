
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


typedef struct{ //estrutura do struct ultlizada
    char nome[20];
    float preco;
    int quantidade;
}Carrinho;

 int main() {
    
 
    int i; // variaveis
    float total[5];
    Carrinho produtos[5];
    
    //INF dos produtos
    for (i=0; i<5; i++){
        printf("Informe o nome do produto %d:\n", i+ 1);
        scanf("%s", produtos[i].nome);
        printf("Informe o preco do produto %d:\n", i+ 1);
        scanf("%f", &produtos[i].preco);
        printf("Informe a quantidade do produto %d:\n", i+ 1);
        scanf("%d", &produtos[i].quantidade);

    }
    
    //calc preço
     for(i=0; i<5; i++){
        total[i]= produtos[i].preco * produtos[i].quantidade;
     }
   
    // E informar o total
    for(i=0; i<5; i++){
    printf("%s: R$ %.2f\n", produtos[i].nome, total[i]);
    }
    
    return 0;
 }
    