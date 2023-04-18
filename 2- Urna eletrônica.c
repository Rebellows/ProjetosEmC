#include <stdio.h>
#include <stdlib.h>

int nulo = 0, branco = 0, candum = 0, canddois = 0, candtres = 0, valor = 0, totv = 0, sumbn = 0;
float pbranco, pnulo, ptot;

int main () {
    while(1) {
        printf("------\nUrna eletrônica, escolha seu voto.\n [1] Candidato 1\n [2] Candidato 2\n [3] Candidato 3\n [4] Voto em branco\n [5] Voto nulo\n [-1] Parar\n Digite aqui: ");
        scanf("%d", &valor);
        if (valor == 1) {
        candum++;
        totv++;
        }
        if (valor == 2) {
        canddois++;
        totv++;
        }
        if (valor == 3) {
        candtres++;
        totv++;
        }
        if (valor == 4) {
        branco++;
        totv++;
        }
        if (valor == 5) {
        nulo++;
        totv++;
        }
        if (valor == -1) {
            break;
        }
        if (valor != 1 && valor != 2 && valor != 3 && valor != 4 && valor != 5 && valor != -1) { 
            printf("------\nErro, valor inserido não é válido.\n");
        }
    }
     if (totv == 0) {
        pbranco = 0;
        pnulo = 0;
        ptot = 0;
    } else {
        sumbn = branco + nulo;
        pbranco = (float) branco / totv * 100;
        pnulo = (float) nulo / totv * 100;
        ptot = (float) sumbn / totv * 100;
    }
    
    printf("------\nVOTOS:\nVotos totais: %d\nCandidato 1: %d\nCandidato 2: %d\nCandidato 3: %d\nVotos em branco: %d\nVotos nulos: %d\n", totv, candum, canddois, candtres, branco, nulo);
    printf("PORCENTAGEM:\nVotos em branco: %f%%\nVotos nulos: %f%%\nBrancos e nulos: %f%%\n", pbranco, pnulo, ptot);
    return 0;
}
