#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char nome[50];
    float primeiroTri, segundoTri, treceiroTri, mediaNotas;

    printf("Digite seu nome: \n");
    scanf("%s", nome);

    printf("Nota do primeiro trimestre: ");
    scanf("%f", &primeiroTri);

    printf("Nota do segundo trimestre: ");
    scanf("%f", &segundoTri);

    printf("Nota do terceiro trimestre: ");
    scanf("%f", &treceiroTri);

    mediaNotas = (primeiroTri + segundoTri + treceiroTri) / 3;

    if (mediaNotas >= 7.0) {
        printf("Aprovado!");
    }
    else if (mediaNotas >= 4.0) {
        printf("Exame!");
    }
    else {
        printf("Reprovado!");
    }

    return 0;
}
