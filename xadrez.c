#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Função recursiva para movimentação das peças
void moverPeca(char * peca, int movimento) {
    if (movimento == 0) {
        printf("Movimento da peça %s concluído.\n\n", peca);
        return;
    }

    if (peca == "Bispo") {
        printf("Movendo Bispo para cima, direita.\n");
        return moverPeca(peca, movimento - 1);
    }

    if (peca == "Torre") {
        printf("Movendo Torre para a direita.\n");
        return moverPeca(peca, movimento - 1);
    }

    if (peca == "Rainha") {
        printf("Movendo Rainha para a esquerda.\n");
        return moverPeca(peca, movimento - 1);
    }

    if (peca == "Cavalo") {
        if (movimento == 3) {
            printf("Movendo Cavalo para baixo.\n");
        } else {
            printf("Movendo Cavalo para a direita.\n");
        }
        return moverPeca(peca, movimento - 1);
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    const int MOVIMENTO_BISPO = 5;
    const int MOVIMENTO_TORRE = 5;
    const int MOVIMENTO_RAINHA = 8;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("Movimentação do Bispo:\n");

    for (int i = 0; i < MOVIMENTO_BISPO; i++) {
        printf("%d° Movimento: Cima, Direita\n", i + 1);
    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("\nMovimentação da Torre:\n");

    for (int i = 0; i < MOVIMENTO_TORRE; i++) {
        printf("%d° Movimento: Direita\n", i + 1);
    }

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("\nMovimentação da Rainha:\n");

    for (int i = 0; i < MOVIMENTO_RAINHA; i++) {
        printf("%d° Movimento: Esquerda\n", i + 1);
    }

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("\nMovimentação do Cavalo:\n");

    int MOVIMENTO_CAVALO_VERTICAL = 2;
    int MOVIMENTO_CAVALO_HORIZONTAL = 1;

    for (int i = 0; i < MOVIMENTO_CAVALO_VERTICAL; i++) {
        printf("%d° Movimento: Baixo\n", i + 1);
    }

    do {
        MOVIMENTO_CAVALO_HORIZONTAL--;

        printf("%d° Movimento: Esquerda\n", MOVIMENTO_CAVALO_HORIZONTAL + 1);
    } while (MOVIMENTO_CAVALO_HORIZONTAL > 0);

    printf("\nMovimentações recursivas:\n\n");

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.
    moverPeca("Bispo", MOVIMENTO_BISPO);
    moverPeca("Torre", MOVIMENTO_TORRE);
    moverPeca("Rainha", MOVIMENTO_RAINHA);
    moverPeca("Cavalo", 3);

    return 0;
}
