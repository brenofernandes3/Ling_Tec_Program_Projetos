#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float graus, Conversao;
	printf("Insira o angulo em graus: \n");
	scanf("%f", &graus);
	
	Conversao = graus * 3.141592/180;
	
	printf("O angulo em radianos e: %.2f", Conversao);
	
	return 0;
}
