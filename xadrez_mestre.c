#include <stdio.h>

//Função recursiva para a Torre
void moverTorre(int casas){
    if (casas == 0) return; // condição de parada
    printf("Direita\n");
    moverTorre(casas - 1); // chamada recursiva
}

//Função recursiva para a Rainha
void moverRainha(int casas){
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

//Função recursiva para o Bispo
void moverBispoRecursivo(int casas){
    if (casas == 0) return;
    printf("Cima, Direita\n");
    moverBispoRecursivo(casas - 1);
}

//Bispo com loops aninhados (vertical + horizontal)
void moverBispoLoop(int casasVerticais, int casasHorizontais) {
    for (int v = 0; v < casasVerticais; v++) {
        for (int h = 0; h < casasHorizontais; h++){
            printf("Cima, Direita\n");
        }
    }
}

//Movimento complexo do Cavalo (2 para cima, 1 para direita)
void moverCavalo() {
    int passosVerticais = 2;
    int passosHorizontais = 1;

    printf("\nMovimento do Cavalo:\n");

    for (int i = 0, j = 0; i < passosVerticais || j < passosHorizontais; ) {
        if (i < passosVerticais) {
            printf("Cima\n");
            i++;
            continue; //força o loop a voltar para o vertical até completar
        }
        if (j < passosHorizontais) {
            printf ("Direita\n");
            j++;
            break; //Encerra após o movimento horizontal
        }
    }
}

int main() {
    printf("Movimento da Torre:\n");
    moverTorre(5);

    printf("\nMovimento da Rainha: \n");
    moverRainha(8);

    printf("\nMovimento do Bispo (recursivo):\n");
    moverBispoRecursivo(5);

    printf("\nMovimento do Bispo (loops aninhados): \n");
    moverBispoLoop(5, 1);

    moverCavalo();

    return 0;
}