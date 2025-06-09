#include <stdio.h>

int main() {
    // Movimento da Torre (5 casas para a direita) usando FOR
    int movimentoTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 0; i < movimentoTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // Movimento do Bispo (5 casas na diagonal para cima e à direita) usando WHILE
    int movimentoBispo = 5;
    int i = 0;
    printf("Movimento do Bispo:\n");
    while (i < movimentoBispo) {
        printf("Cima Direita\n");
        i++;
    }

    printf("\n");

    // Movimento da Rainha (8 casas para a esquerda) usando DO-WHILE
    int movimentoRainha = 8;
    int j = 0;
    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        j++;
    } while (j < movimentoRainha);

    return 0;
}
