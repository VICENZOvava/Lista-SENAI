#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main() {
	int opcao; // declarar variavel
	float num1, num2; // declarar variavel

	do {
		printf("\n Menu:\n"); // menu de opcoes
		printf("1 - Somar\n");
		printf("2 - Subtrair\n");
		printf("3 - Sair\n");
		printf("Escolha uma opcaoo: ");
		scanf("%d", &opcao); // guardar informação da operação desejada

		switch(opcao) { 
		case 1: // caso o usuario selecione a primeira opçao
			printf("Digite o primeiro numero: ");
			scanf("%f", &num1);
			printf("Digite o segundo numero: ");
			scanf("%f", &num2);
			printf("Resultado da soma: %.2f\n", num1 + num2);
			break;
		case 2: // caso o usuario selecione a segunda opçao
			printf("Digite o primeiro numero: ");
			scanf("%f", &num1);
			printf("Digite o segundo numero: ");
			scanf("%f", &num2);
			printf("Resultado da subtracao: %.2f\n", num1 - num2);
			break;
		case 3: // caso o usuario selecione a terceira opçao
			printf("Saindo do programa\n");
			break;
		default: // caso algo fora for selecionado
			printf("Opcao invalida, tente novamente.\n");
		}
	} while (opcao != 3); // caso o usuario digitar um numero maior q 3

	return 0;
}
