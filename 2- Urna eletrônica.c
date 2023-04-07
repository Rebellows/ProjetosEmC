#include <stdio.h>
#include <stdlib.h>

int nulo = 0, branco = 0, candum = 0, canddois = 0, candtres = 0, valor = 0;
int main () {
    while(1) {
        printf("------\nUrna eletrônica, escolha seu voto.\n [1] Candidato 1\n [2] Candidato 2\n [3] Candidato 3\n [4] Voto em branco\n [5] Voto nulo\n [-1] Parar\n Digite aqui: ");
        scanf("%d", &valor);
        if (valor == 1) {
        candum++;
        }
        if (valor == 2) {
        canddois++;
        }
        if (valor == 3) {
        candtres++;
        }
        if (valor == 4) {
        branco++;
        }
        if (valor == 5) {
        nulo++;
        }
        if (valor == -1) {
        printf("------\nVOTOS:\n Candidato 1: %d\n Candidato 2: %d\n Candidato 3: %d\n Votos em branco: %d\n Votos nulos: %d", candum, canddois, candtres, branco, nulo);
        break;
        }
        if (valor != 1 && valor != 2 && valor != 3 && valor != 4 && valor != 5 && valor != -1) { 
            printf("------\nErro, valor inserido não é válido.\n");
        }
    }
    return 0;
}


