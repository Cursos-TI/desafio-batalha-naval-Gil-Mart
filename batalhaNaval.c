#include <stdio.h>


int main() {
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    int tabuleiro[5][5];
    int i, j;

    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    int navio_horizontal_x = 1;
    int navio_vertical_x = 1;

    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
    printf("Navio horizontal em:");
    for (int i = 0; i < 1; i++) {
        printf(" (%d)", navio_horizontal_x + 2);
    }
    printf("\n");

    printf("navio vertical em:");
    for (int i = 0; i < 1; i++) {
        printf("(%d)", navio_vertical_x + 2);
    }

    printf("\n");


    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    int tabuleiroAventureiro[10][10];
    
    //incializando o tabuleiro expandido com 0s
    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            tabuleiroAventureiro[i][j] = 0;
        }
    }
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    for (i = 0; i < 4; i++) {
        tabuleiroAventureiro[i][i] = 4;
        tabuleiroAventureiro[i + 5][i + 5] = 4;

    }
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.
printf("\ntabuleirocompleto(Nivel Aventureiro):\n");
for(i = 0; i < 3; i++) {
    for (j = 0; j < 3; i++) {
        printf("%d ", tabuleiroAventureiro[i][j]);
    }
    printf("\n");
}
    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
