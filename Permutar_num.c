#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int num1, num2, num3, num4;
	printf("Insira quatro numeros: \n");
	scanf("%d%d%d%d", &num1, &num2, &num3, &num4);
	
	printf("numeros na ordem permutada \n");
	printf("%d", num2);
	printf("%d", num4);
	printf("%d", num1);
	printf("%d", num3);
	
	return 0;
}
