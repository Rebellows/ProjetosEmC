#include <stdio.h>
#define N 3 

void iniciar_tabuleiro(char tabuleiro[N][N]) {
    int l, c;
    for (l = 0; l < N; l++) {
        for (c = 0; c < N; c++) {
            tabuleiro[l][c] = ' ';
        }
    }
}

void imprimir_tabuleiro(char tabuleiro[N][N]) {
    int l, c;
    printf("  ");
    for (c = 0; c < N; c++) {
        printf(" %d", c + 1);
    }
    printf("\n");
    for (l = 0; l < N; l++) {
        printf(" %d ", l + 1);
        for (c = 0; c < N; c++) {
            printf("%c ", tabuleiro[l][c]);
        }
        printf("\n");
    }
}

int realizar_jogada(int jogador, int linha, int coluna, char tabuleiro[N][N]) {
    linha--;
    coluna--;
    if (linha < 0 || linha >= N || coluna < 0 || coluna >= N || tabuleiro[linha][coluna] != ' ') {
        printf("Jogada inválida.\n");
        return 0;
    }
    else {
        if (jogador == 1) {
            tabuleiro[linha][coluna] = 'O';
            return 1;
        }
        else {
            tabuleiro[linha][coluna] = 'X';
            return 1;
        }
    }   
}

int verificar_tabuleiro(char tabuleiro[N][N]) {
    int l, c;
    for (l = 0; l < N; l++) {
        if (tabuleiro[l][0] != ' ' && tabuleiro[l][0] == tabuleiro[l][1] && tabuleiro[l][0]  == tabuleiro[l][2]) {
            return 1;
        }
    }
    for (c = 0; c < N; c++) {
        if (tabuleiro[0][c] != ' ' && tabuleiro[0][c] == tabuleiro[1][c] && tabuleiro[0][c]  == tabuleiro[2][c]) {
            return 1;
        }
    }
    if (tabuleiro[0][0] != ' ' && tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[0][0] == tabuleiro[2][2]) {
        return 1;
    }
    if (tabuleiro[0][2] != ' ' && tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[0][2] == tabuleiro[2][0]) {
        return 1;
    }
    for (c = 0; c < N; c++) {
        for (l = 0; l < N; l++) {
            if (tabuleiro[l][c] == ' ') {
                return 0;
            }
        }
    }
}

int main () {
    int linha, coluna, jogador = 1;
    char tabuleiro[N][N];
    iniciar_tabuleiro(tabuleiro);
    while (1) {
        printf("\nJogador %d\n\n", jogador);
        imprimir_tabuleiro(tabuleiro);
        printf("\nDigite a linha desejada (1 a 3): ");
        scanf("%d", &linha);
        printf("Digite a coluna desejada (1 a 3): ");
        scanf("%d", &coluna);
        printf("\n");
        if (realizar_jogada(jogador, linha, coluna, tabuleiro) == 1) {
            if (verificar_tabuleiro(tabuleiro) == 1) {
                imprimir_tabuleiro(tabuleiro);
                printf("\nJogador %d venceu!\n", jogador);
                break;
            }
            if (verificar_tabuleiro(tabuleiro) != 0 && verificar_tabuleiro(tabuleiro) != 1) {
                imprimir_tabuleiro(tabuleiro);
                printf("\nEmpate!\n");
                break;
            }
            else {
                jogador++;
                if (jogador % 2 == 0) {
                    jogador = 2;
                }
                else {
                    jogador = 1;
                }
            }
        }
    }
    return 0;
}
