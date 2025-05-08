#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main() {
	setlocale (LC_ALL, "");
	int idade ; // declarar variavel

	printf ("Digite sua idade:\n");
	scanf ("%d",&idade); // armazenar numero

	if (idade < 16) { // se a idade for menor q 16
    	printf("Voce nao vota.\n");
	}	
	 else if (idade >= 16 && idade <= 18 || idade >= 70){ // se idade for entre 16 e 18 e 70 mais opcional
	printf (" o voto e opicional");
	}
     else{
      printf ("O voto é obrigatorio ");
	}
	
	return 0;
}