#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main() {
	setlocale (LC_ALL, "");
	float n[10],soma, m; // variavel
	int i ; // declarar variavel

	for(i=0; i<10; i++) { // laco de repeticao
		printf("Digite os 10 numeros %d :", i + 1);
		scanf("%f", &n[i]); // guardando informacao

		soma +=n[i]; // somar os 10 numeros
	}
	m = soma / 10; // tirar a media da soma
	printf ("A media desse numeros C) %.1f", m); // mostrar o resultado

	return 0;
}
