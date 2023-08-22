// Exercicio015, Gabriel Dorneles Rebello (T011), recebe 30 numeros e verifica se a soma de dois proximos resulta no seguinte, 06/08/23
#include <stdio.h>
#define n 30

int reverso(int vetor[n]) {
    int cont = 0;
    for (int i = 0; i < n - 2; i++) {
        if (vetor[i] + vetor[i+1] == vetor[i+2]) {
            cont++;
        }
    }
    printf("%d", cont);
}

int main() {
    int vetor[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }
    reverso(vetor);
}