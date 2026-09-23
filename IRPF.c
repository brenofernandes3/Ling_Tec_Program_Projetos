#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	 float salario, imposto;

    if (salario <= 2259.20) {
        imposto = 0;
    } 
    else if (salario <= 2826.65) {
        imposto = (salario * 0.075) - 169.44;
    } 
    else if (salario <= 3751.05) {
        imposto = (salario * 0.15) - 381.44;
    } 
    else if (salario <= 4664.68) {
        imposto = (salario * 0.225) - 662.77;
    } 
    else {
        imposto = (salario * 0.275) - 896.00;
    }

    return imposto;
 } 
