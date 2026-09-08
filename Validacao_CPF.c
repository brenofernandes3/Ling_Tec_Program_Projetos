//VERIFICAÇÃO DO CPF

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int CPF[11], i, soma, resto; // i  = contador
    int digito1, digito2;

    printf("Insira seu CPF: ");

    for (i = 0; i < 11; i++) { // Faz a contagem dos 11 números do CPF
        scanf("%1d", &CPF[i]); // 1d lê apenas um número de cada vez e envia para a variavel
    }

    // Primeiro dígito
    soma = 0;
    for (i = 0; i < 9; i++) { // faz a verificação dos 9 primeiros números 
        soma = soma + CPF[i] * (10 - i); //faz as somas e multiplicações necessarias
    }

    resto = soma % 11; // pega o resto da divisão

    if (resto < 2)
        digito1 = 0;
    else
        digito1 = 11 - resto; // caso o digito1 não siga a o comando de ser <2, então o programa vai pegar e subtrailo de 11

    // Segundo dígito
    soma = 0;
    for (i = 0; i < 10; i++) {
        soma = soma + CPF[i] * (11 - i);
    }

    resto = soma % 11;

    if (resto < 2)
        digito2 = 0;
    else
        digito2 = 11 - resto;

    // Verificação
    if (digito1 == CPF[9] && digito2 == CPF[10])
        printf("CPF válido\n");
    else
        printf("CPF inválido\n");

    return 0;
}

