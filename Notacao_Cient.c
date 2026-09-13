#include <stdio.h>

//Notação Cientifica
int main() {
    double numero;
    int expoente = 0;

    printf("Digite um numero: ");
    scanf("%lf", &numero);

    if (numero >= 1 && numero < 10) {
        printf("%.2lf x 10^%d", numero, expoente);
    }

    return 0;
}
