#include <stdio.h>

// ==============================
// Constantes para cada peça
// ==============================
const int MOV_TORRE = 5;     // Direita
const int MOV_BISPO = 5;     // Cima Direita (Diagonal)
const int MOV_RAINHA = 8;    // Esquerda
const int MOV_CAVALO = 3;    // L: 2 para cima + 1 para direita

// ==============================
// TORRE - Função Recursiva
// ==============================
void moverTorre(int casas) {
    if (casas <= 0) return; // Caso base: fim da recursão
    printf("Direita\n");
    moverTorre(casas - 1);  // Chamada recursiva com uma casa a menos
}

// ==============================
// RAINHA - Função Recursiva
// ==============================
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// ==============================
// BISPO - Função Recursiva + Loops Aninhados
// Movimento: Cima Direita (Diagonal)
// ==============================
void moverBispo(int casas) {
    if (casas <= 0) return;

    // Loop externo: movimento vertical (Cima)
    for (int i = 0; i < 1; i++) {
        // Loop interno: movimento horizontal (Direita)
        for (int j = 0; j < 1; j++) {
            printf("Cima Direita\n");
        }
    }

    moverBispo(casas - 1); // Recursão reduzindo número de casas
}

// ==============================
// CAVALO - Loops aninhados com múltiplas variáveis e controle de fluxo
// Movimento: 2 casas para cima + 1 casa para a direita (em "L")
// ==============================
void moverCavalo(int movimentos) {
    printf("Movimento do Cavalo:\n");

    for (int m = 1; m <= movimentos; m++) {
        int subidas = 0;
        int direita = 0;

        // Loop vertical (Cima)
        for (int i = 0; i < 3; i++) {
            if (subidas >= 2) break; // Limita a 2 movimentos
            if (i == 1) {
                subidas++;
                printf("Cima\n");
                continue; // Pula o restante do loop
            }
            subidas++;
            printf("Cima\n");
        }

        // Loop horizontal (Direita)
        for (int j = 0; j < 2; j++) {
            if (direita >= 1) break;
            direita++;
            printf("Direita\n");
        }

        printf("----\n"); // Separador visual entre movimentos
    }
}

// ==============================
// FUNÇÃO PRINCIPAL
// ==============================
int main() {
    // ======================
    // TORRE
    // ======================
    printf("Movimento da Torre:\n");
    moverTorre(MOV_TORRE);
    printf("\n");

    // ======================
    // BISPO
    // ======================
    printf("Movimento do Bispo:\n");
    moverBispo(MOV_BISPO);
    printf("\n");

    // ======================
    // RAINHA
    // ======================
    printf("Movimento da Rainha:\n");
    moverRainha(MOV_RAINHA);
    printf("\n");

    // ======================
    // CAVALO
    // ======================
    moverCavalo(MOV_CAVALO);
    printf("\n");

    return 0;
}
