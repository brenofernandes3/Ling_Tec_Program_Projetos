#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	double raio, volume, pi;
    
    printf("Digite o raio: ");
    scanf("%lf", &raio);
    
    pi = 3.14159;

    volume = (4.0 / 3.0) * pi * raio * raio * raio;

    printf("Volume = %.3lf\n", volume);


	return 0;
}
