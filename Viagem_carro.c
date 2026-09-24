#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int tempo, velomedia;
	float distancia, litros;
	
	printf("Informe o tempo total de viagem em horas: \n");
	scanf("%d", &tempo);
	
	printf("Informe oa velocidade media da viagem: \n");
	scanf("%d", &velomedia);
	
	distancia = tempo * velomedia;
	litros = distancia / 12;
	
	printf("Seriam necessarios cerca de: %.3f litros", litros);
	
	return 0;
}
