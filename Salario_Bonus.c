#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	 double salario, Bonus, ValorVendas, Total;
	printf("Insira o salario fixo: ");
	scanf("%lf", &salario);
	
	printf("Insira o valor total das vendas: ");
	scanf("%lf", &ValorVendas);
	
	Bonus = ValorVendas * 0.15;
	Total = Bonus + salario;
	printf("O valor total a receber e de: %2lf", Total);
	return 0;
}
