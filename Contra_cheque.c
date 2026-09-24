#include <stdio.h>
#include <stdlib.h>

// INSS
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

    return inss;
}

// IRPF
float calcularIRPF(float salario) {
    float imposto;

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

int main() {

    float valorHora;
    float horas;
    float salarioBruto;
    float inss;
    float irpf;
    float salarioLiquido;

    printf("Digite o valor da hora trabalhada: R$ ");
    scanf("%f", &valorHora);

    printf("Digite a quantidade de horas trabalhadas no mes: ");
    scanf("%f", &horas);

    // salário bruto
    salarioBruto = valorHora * horas;

    // Chama as funções
    inss = calcularINSS(salarioBruto);
    irpf = calcularIRPF(salarioBruto);

    // salário líquido
    salarioLiquido = salarioBruto - inss - irpf;

    // Imprime o contra-cheque
    printf("\n");
    printf("====================================================\n");
    printf("       RECIBO DE PAGAMENTO DE SALARIO (CONTRA-CHEQUE)\n");
    printf("====================================================\n");

    printf("Salario Bruto (Horas x Valor):   R$ %9.2f\n", salarioBruto);
    printf("(-) Desconto INSS:               R$ %9.2f\n", inss);
    printf("(-) Desconto IRPF:               R$ %9.2f\n", irpf);

    printf("----------------------------------------------------\n");

    printf("LIQUIDO A RECEBER:               R$ %9.2f\n", salarioLiquido);

    printf("====================================================\n");

    return 0;
}
