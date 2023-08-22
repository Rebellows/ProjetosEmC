// Exercicio012, Gabriel Dorneles Rebello (T011), conta a quantidade de casas com peao ou dama dos dois jogadores, 06/08/23
#include <stdio.h>
#define CASAS 64

struct casa {
    int cor;
    int jogador;
    char peca;
};

int conta_casas(struct casa *tab, int num_casas, int jogador, char peca);

int conta_casas(struct casa *tab, int num_casas, int jogador, char peca) {
    int contador = 0;
    for (int i = 0; i < num_casas; i++) {
        if (tab[i].jogador == jogador && tab[i].peca == peca) {
                contador++;
        }
    }
    return contador;
}

int main() {
    int i;
    struct casa damas[CASAS];
    for (i=0; i<CASAS; ++i)
        scanf("%d %d %c", &(damas[i].cor), &(damas[i].jogador), &(damas[i].peca) );
    int p1 = conta_casas((struct casa *)damas,CASAS,1,'P');
    int d1 = conta_casas((struct casa *)damas,CASAS,1,'D');
    int p2 = conta_casas((struct casa *)damas,CASAS,2,'P');
    int d2 = conta_casas((struct casa *)damas,CASAS,2,'D');
    printf("%d %d %d %d\n", p1, d1, p2, d2);
    return 0;
}
