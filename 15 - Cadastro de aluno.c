#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
struct Aluno{
    char nome[100];
    int idade;
    float nota;
};

int main (){
    struct Aluno aluno1 = {"Ana",16,6.30};
    
    printf ("Nome do Aluno %s\n",aluno1.nome);
    printf ("Idade do Aluno %d\n",aluno1.idade);
    printf ("Nota do Aluno %f\n", aluno1.nota);
    
    return 0;
}