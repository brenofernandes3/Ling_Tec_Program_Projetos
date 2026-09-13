#include <stdio.h>
#include <stdlib.h>

//Imprimir na ordem inversa
int main(int argc, char *argv[]) {
	    int n1, n2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);

    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    
    if (n1 == n2) {
		printf("Seus Numeros sao iguais");
	}
	else {
		 printf("Numeros na ordem inversa:\n");
		 printf("%d\n", n2);
    	printf("%d\n", n1);
	}

	return 0;
}
