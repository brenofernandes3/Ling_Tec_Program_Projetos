#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int valor, quantidade;

    printf("Digite o valor do saque: R$ ");
    scanf("%d", &valor);

    quantidade = valor / 100;
    printf("Notas de R$100: %d\n", quantidade);
    valor = valor % 100;

    quantidade = valor / 50;
    printf("Notas de R$50: %d\n", quantidade);
    valor = valor % 50;

    quantidade = valor / 10;
    printf("Notas de R$10: %d\n", quantidade);
    valor = valor % 10;

    quantidade = valor / 5;
    printf("Notas de R$5: %d\n", quantidade);
    valor = valor % 5;

    quantidade = valor / 2;
    printf("Notas de R$2: %d\n", quantidade);
    valor = valor % 2;

    quantidade = valor / 1;
    printf("Notas de R$1: %d\n", quantidade);

	return 0;
}
