#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	float VeloKm, Conversao; 
	
	printf("Insira a velocidade em Km/h:\n ");
	scanf("%f", &VeloKm);
	
	Conversao = VeloKm / 36;
	
	printf("A velocidade convertida para M/S e: %.2f", Conversao);
	
	return 0;
}
