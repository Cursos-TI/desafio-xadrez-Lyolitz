#include <stdio.h>

int main() {
    // Simular 3 movimentos em L do Cavalo
    int movimentosCavalo = 3;

    printf("Movimento do Cavalo:\n");

    // Loop externo controla quantos movimentos L o cavalo faz
    for (int m = 1; m <= movimentosCavalo; m++) {
        // Primeiro, simula as 2 casas para baixo
        int i = 0;
        while (i < 2) {
            printf("Baixo\n");
            i++;
        }

        // Depois, simula 1 casa para a esquerda
        int j = 0;
        do {
            printf("Esquerda\n");
            j++;
        } while (j < 1);

        // Separador entre movimentos
        printf("----\n");
    }

    return 0;
}
