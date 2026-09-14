#include <stdio.h>
#include <stdlib.h>


int main() {
	float var1, var2, var3, var4, calculo, media, produtorio;
	
	printf("Inisira um valor:\n");
	scanf("%f %f %f %f", &var1, &var2, &var3, &var4);
	
	calculo = var1 + var2 + var3 + var4;
	media = calculo / 4;
	produtorio = var1 * var2 * var3 * var4;	
	
	printf("A soma dos numeros e: %f\n", calculo);
	printf("A media dos numeros e: %f\n", media);
	printf("O produtorio dos numeros e: %f\n", produtorio);
	
	

	return 0;
}


