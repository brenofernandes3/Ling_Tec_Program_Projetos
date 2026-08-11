#include <stdio.h>
#include <stdlib.h>
#define pi 3.1415

int main(int argc, char *argv[]) {
	
	float r, area, h, base, BASE, areaTrapezio;
	
	area = pi *(r*r);
	
	printf("Insira o raio R do circulo");
	scanf("%f",&r);
	
	printf("A area do circulo que possui raio = %f e = %f \n", r, area);	
	
	printf("Insira a altura do trapezio \n");
	scanf("%f", &h);
	
	printf("Insira a base menor \n");
	scanf("%f", &base);
	
	printf("Insira a base maior \n");
	scanf("%f", &BASE);
	
	areaTrapezio = (base+BASE)*h /2;
	
	printf("A area do trapezio e = %f", areaTrapezio);
	return 0;
};

