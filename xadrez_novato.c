#include <stdio.h>

int main() {

    int casasTorre, casasBispo, casasRainha;

    //Movimento da Torre (For)
    casasTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 0; i < casasTorre;) {
        printf("Direita\n");
        i++;
    }

    //Movimento do Bispo (While)
    casasBispo = 5;
    int j = 0;
    printf("\nMovimento do Bispo: \n");
    while (j < casasBispo) {
        printf("Cima, Direita\n");
        j++;
    }

    //Movimento da Rainha(Do-While)
    casasRainha = 8;
    int m = 0;
    printf("\nMovimento da Rainha: \n");
    do {
        printf("Esquerda\n");
        m++;
    } while (m < casasRainha);

    return 0;
}