#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	float calcularINSS(float salario) {
    float inss;

    if (salario <= 1518.00) {
        inss = salario * 0.075;
    }
    else if (salario <= 2793.88) {
        inss = salario * 0.09;
    }
    else if (salario <= 4190.83) {
        inss = salario * 0.12;
    }
    else {
        inss = salario * 0.14;
    }

	return 0;
}
	
	

