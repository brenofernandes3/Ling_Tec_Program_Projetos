#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int idade, anoAtual, AnoNasc;
	printf("Insira sua idade: \n");
	scanf("%d", &idade);
	
	anoAtual = 2026;
	AnoNasc = idade - anoAtual;
	
	printf("O seu ano de nascimento e: \n %d", AnoNasc);

	return 0;
}
