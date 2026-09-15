#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float Escolha, Temp, Resultado, Resultado2;
	
	printf("---ESCOLHA SUA CONVERSAO--- \n");
	printf("1 - Celsius para Fahrenheit \n");
	printf("2 - Fahrenheit para Celsius \n");
	scanf("%f", &Escolha);
	
	printf("Digite a temperatura: \n");
	scanf("%f", &Temp);
	
	
	if (Escolha == 1) {
		Resultado = (Temp * 9/5) + 32;
		printf("Sua temperatura em Fahrenheit e: %.2f", Resultado);
	} else {
		Resultado2 = (Temp - 32) * 5/9;
		printf("Sua temperatura em Celsius e: %.2f", Resultado2);
	}
	return 0;
}
