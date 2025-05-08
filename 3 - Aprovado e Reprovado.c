#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main() {
	setlocale (LC_ALL, "");
	float n[2],soma, m; // variavel
	int i ; // declarar variavel

	for(i=0; i<2; i++) { // laço de repetição
		printf("Digite as suas %d nota:", i + 1);
		scanf("%f", &n[i]); // guardando informação
		soma +=n[i]; // somar os dois numeros

	}
	m = soma/2; // dividir a soma por 2
	if ( m >= 7)
	printf("A sua media é) %2.f. E vc foi Aprovado \n", m); // mostrar o resultado
	else 
	printf ("A sua media é) %2.f. E vc foi Reprovado \n", m); // mostrar resultado
	return 0;
}
