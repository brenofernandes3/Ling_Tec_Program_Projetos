#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	float ValorAcao, ValorPatri, pvp;
	
	printf("Insira o valor da acao: \n");
	scanf("%f", &ValorAcao);
	
	printf("Insira o valor patrimonial: \n");
	scanf("%f", &ValorPatri);
	
	pvp = ValorAcao / ValorPatri;
	
	printf("P/VP = %.2f\n", pvp);
	 
    if (pvp < 0.3) {
        printf("Oportunidade!");0
    }
    else if (pvp < 0.5) {
        printf("Atencao!");
    }
    else if (pvp < 0.7) {
        printf("Otima compra!");
    }
    else if (pvp < 1.0) {
        printf("Regular/espere!");
    }
    else if (pvp < 1.2) {
        printf("Ruim! Nao compre!");
    }
    else {
        printf("inconclusivel!");
    }
    
    return 0;
}
