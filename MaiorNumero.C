	#include <math.h>
	#include <stdio.h>
	#include <stdlib.h>
	int main(int argc, char *argv[]) {
	int a, b, c, calculo, calculo2;
	
	printf("Insira o valor para A: ");
	scanf( "%d", &a);
	printf("Insira um valor para b: ");
	scanf("%d", &b);
	printf("Insira um valor para c: ");
	scanf("%d", &c);
	
	calculo = ((a+b+abs(a-b))/2);
	calculo2 = ((calculo+c+abs(calculo-c))/2);


	printf("O maior numero entre os tres e: %d", calculo2);
	return 0;
}
	
