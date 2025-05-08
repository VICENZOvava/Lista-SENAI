    #include <stdio.h>
    #include <locale.h>
    #include <stdlib.h>
    int main() {
    setlocale(LC_ALL,"");
    float num1, num2, resultado; // declarar variavel
    int operador; // declarar operacao
     printf("Digite o primeiro número: ");
    scanf("%f", &num1); // armazenar primeiro numero
     printf("Digite o segundo número: ");
    scanf("%f", &num2); // armazenar segundo numero

    printf ("escolha a operacao \n"); // menu de opcoes
    printf ("1.+ \n"); // soma
    printf ("2.- \n"); // subtração
    printf ("3.* \n"); // multiplicação
    printf ("4./ \n"); // divisão
    scanf("%d", &operador); // guardar informação da operação desejada
     switch (operador) {
        case 1: // caso o usuario selecione a primeira opçao
            resultado = num1 + num2;
            printf("Resultado da conta: %2f\n", resultado);
            break;
        case 2: //caso o usuario selecione a primeira opçao
            resultado = num1 - num2;
            printf("Resultado da conta: %2f\n", resultado);
            break;
        case 3: // caso o usuario selecione a primeira opçao
            resultado = num1 * num2;
            printf("Resultado da conta: %2f\n", resultado);
            break;
        case 4: //caso o usuario selecione a primeira opçao
                resultado = num1 / num2;
                printf("Resultado da conta: %2f\n", resultado);
            
            break;
    default:
            printf("Erro: operador inválido.\n"); // caso usuario escolha um numero inexistente na tabela
    }  return 1;
     return 0;
}