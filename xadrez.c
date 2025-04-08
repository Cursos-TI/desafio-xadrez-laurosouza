#include <stdio.h>

int main() {
    printf("Desafio Xadrez:\n");

    // Movimentação da Torre cinco casas para a direita
    printf("\nMovimentos da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Movimento %d: Direita\n", i + 1); // Imprime a direção do movimento com a contagem
    }

    // Movimentação do Bispo cinco casas na diagonal para cima e à direita
    printf("\nMovimentos do Bispo:\n");
    int j = 1;
    while (j <= 5) {
        printf("Movimento %d: Cima e direita\n", j); // Imprime a direção do movimento com a contagem
        j++;
    }

    // Movimentação da Rainha oito casas para a esquerda
    printf("\nMovimentos da Rainha:\n");
    int k = 1;
    do {
        printf("Movimento %d: Esquerda\n", k); // Imprime a direção do movimento com a contagem
        k++;
    } while (k <= 8);

    return 0;
}
